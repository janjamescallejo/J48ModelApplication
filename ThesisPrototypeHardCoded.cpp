// ThesisPrototypeHardCoded.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <shlobj.h>
#include <shlwapi.h>
#include <objbase.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include "Database.h"
double sout;
double nsucsum = 0;
double nfaisum = 0;
double toCSV [5];
string nnResults;
string nbResults;
string svmResults;
string j48Results;
using namespace std;
//database d;
string J48decision(int i, double joy, double fear, double disgust, double sadness, double anger, double surprise, double contempt, double calm, double angered, double joyful, double sorrow)
{
	string decision;
	/*if (sadness <= 0.0724)
	{
		if (disgust <= 0.7575)
		{
			if (anger <= 0.0192)
			{
				if (joyful <= 26)
				{
					if (sadness <= 0.0015)
					{
						if (fear <= 0.0012)
						{
							if (sadness <= 0)
							{
								if (disgust <= 0.0039)
								{
									if (fear <= 0.0007)
									{
										if (contempt <= 0.0001)
										{
											if (contempt <= 0)
											{
												decision = "Low";
											}
											else
											{
												if (disgust < 0.0009)
												{
													decision = "High";
												}
												else
												{
													if (fear <= 0.0003)
													{
														decision = "Low";
													}
													else
													{
														if (joy <= 99.8953)
														{
															decision = "High";
														}
														else
														{
															decision = "Low";
														}
													}
												}
											}
										}
										else
										{
											if (angered <= 6)
											{
												decision = "Low";
											}
											else
											{
												decision = "High";
											}
										}
									}
									else
									{
										decision = "High";
									}
								}
								else
								{
									decision = "Low";
								}
							}
							else
							{
								if (angered <= 3)
								{
									if (anger <= 0.0002)
									{
										if (contempt <= 0.0002)
										{
											decision = "Low";
										}
										else
										{
											decision = "High";
										}
									}
									else
									{
										decision = "Low";
									}
								}
								else
								{
									decision = "Low";
								}
							}
						}
						else
						{
							if (sorrow <= 6)
							{
								if (disgust <= 0.0935)
								{
									decision = "High";
								}
								else
								{
									if (joy <= 99.9288)
									{
										decision = "High";
									}
									else
									{
										decision = "Low";
									}
								}
							}
							else
							{
								if (joy <= 99.9256)
								{
									if (joy <= 99.9095)
									{
										decision = "Low";
									}
									else
									{
										decision = "High";
									}
								}
								else
								{
									decision = "Low";
								}
							}
						}
					}
					else
					{
						if (joy <= 99.5734)
						{
							if (joy <= 99.5336)
							{
								if (anger <= 0.0048)
								{
									decision = "Low";
								}
								else
								{
									if (sorrow <= 2)
									{
										if (sorrow <= 0)
										{
											if (joy <= 0.3651)
											{
												if (sadness <= 0.0249)
												{
													if (joy <= 0.003)
													{
														if (angered <= 2)
														{
															decision = "Low";
														}
														else
														{
															if (angered <= 5)
															{
																decision = "High";
															}
															else
															{
																decision = "Low";
															}
														}
													}
													else
													{
														decision = "High";
													}
												}
												else
												{
													if (disgust <= 0.5649)
													{
														if (anger <= 0.0049)
														{
															decision = "Low";
														}
														else
														{
															if (joy <= 0.002)
															{
																decision = "High";
															}
															else
															{
																if (fear <= 0.0058)
																{
																	decision = "High";
																}
																else
																{
																	decision = "Low";
																}
															}
														}
													}
													else
													{
														decision = "Low";
													}
												}
											}
											else
											{
												decision = "Low";
											}
										}
										else
										{
											decision = "High";
										}
									}
									else
									{
										decision = "Low";
									}
								}
							}
							else
							{
								if (joyful <= 11)
								{
									if (joy <= 99.5652)
									{
										if (angered <= 0)
										{
											decision = "High";
										}
										else
										{
											decision = "Low";
										}
									}
									else
									{
										decision = "High";
									}
								}
								else
								{
									decision = "Low";
								}
							}
						}
						else
						{
							decision = "Low";
						}
					}
				}
				else
				{
					decision = "Low";
				}
			}
			else
			{
				decision = "Low";
			}
		}
		else
		{
			if (calm <= 43)
			{
				if (calm <= 30)
				{
					decision = "Low";
				}
				else
				{
					if (joy <= 99.928)
					{
						if (calm <= 41)
						{
							decision = "Low";
						}
						else
						{
							if (sadness <= 0.0003)
							{
								decision = "High";
							}
							else
							{
								if (sadness <= 0.0247)
								{
									decision = "Low";
								}
								else
								{
									if (contempt <= 4.3306)
									{
										decision = "High";
									}
									else
									{
										decision = "Low";
									}
								}
							}
						}
					}
					else
					{
						if (calm <= 37)
						{
							decision = "High";
						}
						else
						{
							if (disgust <= 46.1686)
							{
								decision = "Low";
							}
							else
							{
								decision = "High";
							}
						}
					}
				}
			}
			else
			{
				if (contempt <= 0.1875)
				{
					if (disgust <= 99.5419)
					{
						decision = "Low";
					}
					else
					{
						decision = "High";
					}
				}
				else
				{
					if (anger <= 0.069)
					{
						decision = "High";
					}
					else
					{
						if (sadness <= 0.0322)
						{
							if (sadness <= 0.0109)
							{
								decision = "High";
							}
							else
							{
								decision = "Low";
							}
						}
						else
						{
							decision = "High";
						}
					}
				}
			}
		}
	}
	else
	{
		if (calm <= 33)
		{
			decision = "Low";
		}
		else
		{
			if (surprise <= 0.2312)
			{
				decision = "High";
			}
			else
			{
				if (joy <= 0.0019)
				{
					if (sorrow <= 4)
					{
						if (disgust <= 0.4563)
						{
							if (contempt <= 0.2309)
							{
								decision = "High";
							}
							else
							{
								decision = "Low";
							}
						}
						else
						{
							if (sadness <= 43.7258)
							{
								decision = "High";
							}
							else
							{
								decision = "Low";
							}
						}
					}
					else
					{
						if (angered <= 0)
						{
							decision = "Low";
						}
						else
						{
							if (fear <= 0.25)
							{
								decision = "Low";
							}
							else
							{
								decision = "High";
							}
						}
					}
				}
				else
				{
					if (joy <= 99.5701)
					{
						decision = "High";
					}
					else
					{
						if (contempt <= 0.2655)
						{
							decision = "Low";
						}
						else
						{
							if (sadness <= 9.2052)
							{
								if (anger <= 52.2878)
								{
									if (sorrow <= 6)
									{
										decision = "High";
									}
									else
									{
										if (sadness <= 1.7957)
										{
											decision = "Low";
										}
										else
										{
											decision = "High";
										}
									}
								}
								else
								{
									decision = "Low";
								}
							}
							else
							{
								if (sorrow <= 2)
								{
									decision = "Low";
								}
								else
								{
									decision = "High";
								}
							}
						}
					}
				}
			}
		}
	}
	//d.insertJ48Result(num, i, decision);*/
string j48Values[34];
int j=0;
string k;
ifstream j48weights;
j48weights.open(j48Results);
try
{
	while (j48weights.good())
	{
		if (j == 34)
			break;
		getline(j48weights, k, '\n');
		j48Values[j] = k;
		k = "";
		j++;

	}
}
catch (exception e)
{
	j48weights.close();
}
j48weights.close();
int n = i - 1;
decision = j48Values[n];
	return decision;
	/*
	string fromcsv[34];
	int k=i-1;
	decision=fromcsv[k];
	*/

}
string SVMdecision(int i, double joy, double fear, double disgust, double sadness, double anger, double surprise, double contempt, double calm, double angered, double joyful, double sorrow)
{
	ifstream svmWeights;
	double SWeights[12];
	string s;
	svmWeights.open(svmResults);
	int j = 0;
	try
	{
		while (svmWeights.good())
		{
			if (j == 12)
				break;
			getline(svmWeights, s,'\n');
			SWeights[j] = stod(s);
			s = "";
			j++;
			
		}
	}
	catch (exception e)
	{
		svmWeights.close();
	}
	svmWeights.close();
	double bias = SWeights[11];
	double joyweight = SWeights[0];
	double fearweight = SWeights[1];
	double disgustweight = SWeights[2];
	double sadnessweight = SWeights[3];
	double angerweight = SWeights[4];
	double surpriseweight = SWeights[5];
	double contemptweight = SWeights[6];
	double calmweight = SWeights[7];
	double angeredweight = SWeights[8];
	double joyfulweight = SWeights[9];
	double sorrowweight = SWeights[10];
	double judgment = bias + joy * joyweight + fear * fearweight + disgust * disgustweight + sadness * sadnessweight + anger * angerweight + surprise * surpriseweight + contempt * contemptweight + calm * calmweight + angered *angeredweight + joyful * joyfulweight + sorrow * sorrowweight;
	sout = judgment;
	if (judgment < 0)
	{
		//d.insertSVMResult(num, i, judgment, "FAIL");
		toCSV[0] = judgment;
		return "Low";
	}
	else
	{
		//d.insertSVMResult(num, i, judgment, "SUCCESS");
		toCSV[0] = judgment;
		return "High";
	}
}
string NBdecision(int i, double joy, double fear, double disgust, double sadness, double anger, double surprise, double contempt, double calm, double angered, double joyful, double sorrow)
{
	double bweights[11][8];
	string n;
	ifstream NBWeights;
	NBWeights.open(nbResults);
	try {
		for (int i = 0; NBWeights.good(); i++)
		{
			for (int j = 0; j<8; j++)
			{
				getline(NBWeights, n, '\n');
				bweights[i][j] = stod(n);
			}
		}
	}
	catch (exception e)
	{
		NBWeights.close();
	}
	NBWeights.close();
	double input[11];
	input[0] = joy;
	input[1] = fear;
	input[2] = disgust;
	input[3] = sadness;
	input[4] = anger;
	input[5] = surprise;
	input[6] = contempt;
	input[7] = calm;
	input[8] = angered;
	input[9] = joyful;
	input[10] = sorrow;
	double inputMeanSuccess[11];
	for (int i = 0; i < 11; i++)
	{
		inputMeanSuccess[i] = bweights[i][0];
	}
	double inputMeanFail[11];
	for (int i = 0; i < 11; i++)
	{
		inputMeanFail[i] = bweights[i][1];
	}
	double inputVarianceSuccess[11];
	for (int i = 0; i < 11; i++)
	{
		inputVarianceSuccess[i] = bweights[i][2];
	}
	double inputVarianceFail[11];
	for (int i = 0; i < 11; i++)
	{
		inputVarianceFail[i] = bweights[i][3];
	}
	double probableSuccess[11];
	double probableFail[11];
	double label[2];
	label[0] = 1;
	label[1] = 1;
	for (int i = 0; i < 11; i++)
	{
		probableSuccess[i] = 1 / sqrt(2 * 3.14 * inputVarianceSuccess[i]) * exp(-(input[i] - inputMeanSuccess[i])* (input[i] - inputMeanSuccess[i]) / (2 * inputVarianceSuccess[i]));
		probableFail[i] = 1 / sqrt(2 * 3.14 * inputVarianceFail[i]) * exp(-(input[i] - inputMeanFail[i])* (input[i] - inputMeanFail[i]) / (2 * inputVarianceFail[i]));
	}
	for (int i = 0; i < 11; i++)
	{
		label[0] = label[0] * probableSuccess[i];
		label[1] = label[1] * probableFail[i];
	}
	string data;
	toCSV[1] = label[0];
	toCSV[2] = label[1];
	if (label[0] > label[1])
	{
		//d.insertNBResult(num, i, label[0],label[1], "SUCCESS");
		data = "High";
		return data;
	}
	else
	{
		//d.insertNBResult(num, i, label[0], label[1], "FAIL");
		data = "Low ";
		return data;
	}
}
void NNdecision(int i, double joy, double fear, double disgust, double sadness, double anger, double surprise, double contempt, double calm, double angered, double joyful, double sorrow)
{
	double NWeights[86];
	ifstream nnWeights;
	string n;
	int j = 0;
	nnWeights.open(nnResults);
	try{
		while (nnWeights.good())
		{
			getline(nnWeights, n, '\n');
			NWeights[j] = stod(n);
			n = "";
			j++;
			
		}
	}
	catch (exception e)
	{
		nnWeights.close();
	}
	nnWeights.close();
	double sigmoidnode0[7];
	for (int i = 0; i < 7; i++)
	{
		sigmoidnode0[i] = NWeights[i];
	}
	double sigmoidnode1[7];
	for (int i = 7, k = 0; k < 7; k++, i++)
	{
		sigmoidnode1[k] = NWeights[i];
	}
	double sigmoidnode2[12];
	for (int i = 14, k = 0; k < 12; k++, i++)
	{
		sigmoidnode2[k] = NWeights[i];
	}
	double sigmoidnode3[12];
	for (int i = 26, k = 0; k < 12; k++, i++)
	{
		sigmoidnode3[k] = NWeights[i];
	}
	double sigmoidnode4[12];
	for (int i = 38, k = 0; k < 12; k++, i++)
	{
		sigmoidnode4[k] = NWeights[i];
	}
	double sigmoidnode5[12];
	for (int i = 50, k = 0; k < 12; k++, i++)
	{
		sigmoidnode5[k] = NWeights[i];
	}
	double sigmoidnode6[12];
	for (int i = 62, k = 0; k < 12; k++, i++)
	{
		sigmoidnode6[k] = NWeights[i];
	}
	double sigmoidnode7[12];
	for (int i = 74, k = 0; k < 12; k++, i++)
	{
		sigmoidnode7[k] = NWeights[i];
	}
	double firstcom[6];
	firstcom[0] = sigmoidnode2[0] + sigmoidnode2[1] * joy + sigmoidnode2[2] * fear + sigmoidnode2[3] * disgust + sigmoidnode2[4] * sadness + sigmoidnode2[5] * anger + sigmoidnode2[6] * surprise + sigmoidnode2[7] * contempt + sigmoidnode2[8] * calm + sigmoidnode2[9] * angered + sigmoidnode2[10] * joyful + sigmoidnode2[11] * sorrow;
	firstcom[1] = sigmoidnode3[0] + sigmoidnode3[1] * joy + sigmoidnode3[2] * fear + sigmoidnode3[3] * disgust + sigmoidnode3[4] * sadness + sigmoidnode3[5] * anger + sigmoidnode3[6] * surprise + sigmoidnode3[7] * contempt + sigmoidnode3[8] * calm + sigmoidnode3[9] * angered + sigmoidnode3[10] * joyful + sigmoidnode3[11] * sorrow;
	firstcom[2] = sigmoidnode4[0] + sigmoidnode4[1] * joy + sigmoidnode4[2] * fear + sigmoidnode4[3] * disgust + sigmoidnode4[4] * sadness + sigmoidnode4[5] * anger + sigmoidnode4[6] * surprise + sigmoidnode4[7] * contempt + sigmoidnode4[8] * calm + sigmoidnode4[9] * angered + sigmoidnode4[10] * joyful + sigmoidnode4[11] * sorrow;
	firstcom[3] = sigmoidnode5[0] + sigmoidnode5[1] * joy + sigmoidnode5[2] * fear + sigmoidnode5[3] * disgust + sigmoidnode5[4] * sadness + sigmoidnode5[5] * anger + sigmoidnode5[6] * surprise + sigmoidnode5[7] * contempt + sigmoidnode5[8] * calm + sigmoidnode5[9] * angered + sigmoidnode5[10] * joyful + sigmoidnode5[11] * sorrow;
	firstcom[4] = sigmoidnode6[0] + sigmoidnode6[1] * joy + sigmoidnode6[2] * fear + sigmoidnode6[3] * disgust + sigmoidnode6[4] * sadness + sigmoidnode6[5] * anger + sigmoidnode6[6] * surprise + sigmoidnode6[7] * contempt + sigmoidnode6[8] * calm + sigmoidnode6[9] * angered + sigmoidnode6[10] * joyful + sigmoidnode6[11] * sorrow;
	firstcom[5] = sigmoidnode7[0] + sigmoidnode7[1] * joy + sigmoidnode7[2] * fear + sigmoidnode7[3] * disgust + sigmoidnode7[4] * sadness + sigmoidnode7[5] * anger + sigmoidnode7[6] * surprise + sigmoidnode7[7] * contempt + sigmoidnode7[8] * calm + sigmoidnode7[9] * angered + sigmoidnode7[10] * joyful + sigmoidnode7[11] * sorrow;
	double secondcomp[6];
	for (int i = 0; i < 6; i++)
	{
		//secondcomp[i]= ((1 - (exp(-(2 * firstcom[i])))) / (1 + (exp(-(2 * firstcom[i])))));
		//secondcomp[i] = (1 / (1+(exp(-firstcom[i]))));
		secondcomp[i] = tanh(firstcom[i]);
	}
	double successcalc1 = sigmoidnode0[0] + sigmoidnode0[1] * secondcomp[0] + sigmoidnode0[2] * secondcomp[1] + sigmoidnode0[3] * secondcomp[2] + sigmoidnode0[4] * secondcomp[3] + sigmoidnode0[5] * secondcomp[4] + sigmoidnode0[6] * secondcomp[5];
	//double successcalc2 = ((1 - (exp(-(2 * successcalc1)))) / (1 + (exp(-(2 * successcalc1)))));
	//double successcalc2 = (1 / (1 + (exp(-successcalc1))));
	double successcalc2 = tanh(successcalc1);
	double failcalc1 = sigmoidnode1[0] + sigmoidnode1[1] * secondcomp[0] + sigmoidnode1[2] * secondcomp[1] + sigmoidnode1[3] * secondcomp[2] + sigmoidnode1[4] * secondcomp[3] + sigmoidnode1[5] * secondcomp[4] + sigmoidnode1[6] * secondcomp[5];
	//double failcalc2 = ((1 - (exp(-(2 * failcalc1)))) / (1 + (exp(-(2 * failcalc1)))));
	//double failcalc2 = (1 / (1 + (exp(-failcalc1))));
	double failcalc2 = tanh(failcalc1);
	cout << "High: " << successcalc2 << "  Low " << failcalc2 << endl;
	nsucsum = successcalc2 + nsucsum;
	nfaisum = failcalc2 + nfaisum;
	toCSV[3] = successcalc2;
	toCSV[4] = failcalc2;
	if (successcalc2 > failcalc2)
	{
		//d.insertNNResult(num, i, successcalc2, failcalc2, "SUCCESS");
	}
	else
	{
		//d.insertNNResult(num, i, successcalc2, failcalc2, "FAIL");
	}
}
void WekaJavaModel(string svmModel, string svmResult,string nbModel, string nbResult, string nnModel, string nnResult)
{
	
	string parameters = "-jar C:\\Users\\Lenovo\\Documents\\NetBeansProjects\\WekaJavaTest\\dist\\WekaJavaTest.jar "+ svmModel + " "+ svmResult+" "+nbModel+" "+nbResult+" "+nnModel+" "+nnResult;
	LPCSTR par = parameters.c_str();
	cout << "Reads Models from Weka" << endl;
	ShellExecuteA(NULL, "open", "C:\\Program Files (x86)\\Common Files\\Oracle\\Java\\javapath\\java.exe", par, NULL, SW_SHOWMAXIMIZED);
	system("PAUSE");
		
	
}
void j48ModelImplementation(string CSVnew,string ARFFnew, string J48model, string j48Result)
{
	string parameters = "-jar C:\\Users\\Lenovo\\Documents\\NetBeansProjects\\J48ModelApplication\\dist\\J48ModelApplication.jar " + CSVnew + " " + ARFFnew + " " + J48model + " " + j48Result;
	LPCSTR par = parameters.c_str();
	cout << "Reads J48 Model from Weka" << endl;
	ShellExecuteA(NULL, "open", "C:\\Program Files (x86)\\Common Files\\Oracle\\Java\\javapath\\java.exe", par, NULL, SW_SHOWMAXIMIZED);
	system("PAUSE");
}
void newCSV()
{
	cout << "Testing of New CSV creation" << endl;
	int i = 0;
	string contents[34][11];
	ifstream oldcsv;
	oldcsv.open("C:\\Users\\Lenovo\\Desktop\\Thesis\\Data Sets\\Med Rep Datasets\\Med Rep Emotion Testing Dataset 40.csv");
	try
	{
		while (oldcsv.good())
		{
			if (i == 34)
			{
				break;
			}
			getline(oldcsv, contents[i][0], ',');
			getline(oldcsv, contents[i][1], ',');
			getline(oldcsv, contents[i][2], ',');
			getline(oldcsv, contents[i][3], ',');
			getline(oldcsv, contents[i][4], ',');
			getline(oldcsv, contents[i][5], ',');
			getline(oldcsv, contents[i][6], ',');
			getline(oldcsv, contents[i][7], ',');
			getline(oldcsv, contents[i][8], ',');
			getline(oldcsv, contents[i][9], ',');
			getline(oldcsv, contents[i][10], '\n');
			i++;
		}
	}
	catch (exception e)
	{
		oldcsv.close();
	}
	oldcsv.close();
	/*for (int m = 0; m < 34; m++)
	{
		for (int n = 0; n < 11; n++)
		{
			cout <<contents[m][n]<<" ";
		}
		cout << endl;
	}*/
	ofstream newcsv;
	newcsv.open("C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\NewCSV.csv");
	newcsv << "joy" << "," << "fear" << "," << "disgust" << "," << "sadness" << "," << "anger" << "," << "surprise" << "," << "contempt" << "," << "Calm" << "," << "Angered" << "," << "Joyful" << "," << "Sorrow" << "," << "Performance";
	newcsv << "\n";
	for (int i = 0; i < 34; i++)
	{
		newcsv << contents[i][0] << "," << contents[i][1] << "," << contents[i][2] << "," << contents[i][3] << "," << contents[i][4] << "," << contents[i][5] << "," << contents[i][6] << "," << contents[i][7] << "," << contents[i][8] << "," << contents[i][9] << "," << contents[i][10] << ","<<"Low";
		newcsv << "\n";
	}
	newcsv << 0 << "," << 0 << "," << 0 << "," << 0 << "," << 0 << "," << 0 << "," << 0<< "," << 0 << "," << 0<< "," << 0 << "," << 0 << "," << "High";
	newcsv << "\n";
	newcsv.close();
	cout << "Success!" << endl;
}
int main()
{
	
	string svmModel = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Question Removal\\SVMMedRep.model";
	svmResults = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\SVM-Model.csv";
	string nbModel = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Question Removal\\NaiveBatesMedRep.model";
	nbResults = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\NB-Model.csv";
	string nnModel = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Question Removal\\NeuralNetworkMedRep.model";
	nnResults = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\NN-Model.csv";
	WekaJavaModel(svmModel, svmResults, nbModel, nbResults, nnModel, nnResults);
	cout << "Model Test" << endl;
	newCSV();
	string newcsV = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\NewCSV.csv";
	string newarfF = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\NewCSV.arff";
	string j48Model = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Question Removal\\J48MedRep.model";
	j48Results = "C:\\Users\\Lenovo\\Desktop\\Thesis\\Models\\J48Results.csv";
	j48ModelImplementation(newcsV, newarfF, j48Model, j48Results);
	int NBSuccess = 0;
	int NBFail = 0;
	string NBfinaldecision;
	int J48Success = 0;
	int J48fail = 0;
	string J48finaldecision;
	int SVMSuccess = 0;
	int SVMfail = 0;
	string SVMfinaldecision;
	int i = 1;
	double joy;
	double fear;
	double disgust;
	double sadness;
	double anger;
	double surprise;
	double contempt;
	double calm;
	double angered;
	double joyful;
	double sorrow;
	string in;
	ofstream clear;
	clear.open("C:\\Users\\Lenovo\\Desktop\\Thesis\\Data Sets\\Results.csv", ofstream::out | ofstream::trunc);
	clear.close();
	ofstream csv;
	csv.open("C:\\Users\\Lenovo\\Desktop\\Thesis\\Data Sets\\Results.csv");
	ifstream sample;
	sample.open("C:\\Users\\Lenovo\\Desktop\\Thesis\\Data Sets\\Med Rep Datasets\\Med Rep Emotion Testing Dataset 40.csv");
	if (!sample.is_open())
		cout << "Error: File Open" << '\n';
	try {
		while (sample.good())
		{
			
			getline(sample, in, ',');
			joy = stod(in); in = "";
			getline(sample, in, ',');
			fear = stod(in); in = "";
			getline(sample, in, ',');
			disgust = stod(in); in = "";
			getline(sample, in, ',');
			sadness = stod(in); in = "";
			getline(sample, in, ',');
			anger = stod(in); in = "";
			getline(sample, in, ',');
			surprise = stod(in); in = "";
			getline(sample, in, ',');
			contempt = stod(in); in = "";
			getline(sample, in, ',');
			calm = stod(in); in = "";
			getline(sample, in, ',');
			angered = stod(in); in = "";
			getline(sample, in, ',');
			joyful = stod(in); in = "";
			getline(sample, in, '\n');
			sorrow = stod(in); in = "";
			string dec = SVMdecision(i,joy, fear, disgust, sadness, anger, surprise, contempt, calm, angered, joyful, sorrow);
			string dec1 = J48decision(i,joy, fear, disgust, sadness, anger, surprise, contempt, calm, angered, joyful, sorrow);
			string dec2 = NBdecision(i,joy, fear, disgust, sadness, anger, surprise, contempt, calm, angered, joyful, sorrow);

			cout << i << ". SVM: " << dec << " NB: " << dec2 << " Value: " << sout << " J48: " << dec1 << " Neural: ";
			NNdecision(i,joy, fear, disgust, sadness, anger, surprise, contempt, calm, angered, joyful, sorrow);
			csv << i << "," << dec << "," << toCSV[0] << "," << dec2 << "," << toCSV[1] << "," << toCSV[2] << "," << dec1 << "," << toCSV[3] << "," << toCSV[4];
			csv << "\n";
			if (dec2 == "High")
				NBSuccess++;
			else
				NBFail++;
			if (dec == "High")
				SVMSuccess++;
			else
				SVMfail++;
			if (dec1 == "High")
				J48Success++;
			else
				J48fail++;
			i++;
			if (i > 34)
			{
				i = 1;
			}
		}
	}
	catch (exception e) {
		csv.close();
		sample.close();
	}
	sample.close();
	csv.close();
	if (NBSuccess > NBFail)
		NBfinaldecision = "High";
	else
		NBfinaldecision = "Low";
	if (SVMSuccess > SVMfail)
		SVMfinaldecision = "High";
	else
		SVMfinaldecision = "Low";
	if (J48Success > J48fail)
		J48finaldecision = "High";
	else
		J48finaldecision = "Low";
	double nsucmean = nsucsum / 34;
	double nfaimean = nfaisum / 34;
	string NNfinaldecision;
	if (nsucmean > nfaimean)
		NNfinaldecision = "High";
	else
		NNfinaldecision = "Low";
	cout << "Final Decision: NB: " << NBfinaldecision << " SVM: " << SVMfinaldecision << " J48: " << J48finaldecision << " NN: " << NNfinaldecision;
	//d.databaseclose();
	
	system("PAUSE");
    return 0;
}

