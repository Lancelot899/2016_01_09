#!/usr/bin/python
#coding = utf-8

import naive_bayes

listOPosts, listClasses = naive_bayes.loadDataSet()
myVocabList = naive_bayes.createVocabList(listOPosts)

trainMat = []

for vacab in listOPosts:
    trainMat.append(naive_bayes.setOfWords2Vec(myVocabList, vacab))

p0Vect, p1Vect, pAbusive = naive_bayes.trainNB0(trainMat, listClasses)
print p0Vect,'\n', p1Vect
print pAbusive
