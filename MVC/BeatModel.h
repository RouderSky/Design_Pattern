#ifndef __BEATMODEL_H__
#define __BEATMODEL_H__

#include "IBeatModel.h"
#include <vector>
using namespace std;

class BeatModel :public IBeatModel
{
private:
	//�Ž��۲���ģʽ��ʵ����...
	vector<IBeatObserver*> beatObservers;
	vector<IBPMObserver*> bpmObservers;
	/////////////////////////////////////
	int bpm = 90;
	//???
	void beatEvent();
public:
	void on() override;
	void off() override;

	void setBPM(int bpm) override;
	int getBPM() override;

	void registerObserver(IBeatObserver* o) override;
	void removeObserver(IBeatObserver* o) override;
	void notifyBeatObservers();

	void registerObserver(IBPMObserver* o) override;
	void removeObserver(IBPMObserver* o) override;
	void notifyBPMObservers();
};

#endif