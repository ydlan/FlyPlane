#include "cocos2d.h" //ͷ�ļ�ʹ�á� �������������
#include "Enemy.h"

USING_NS_CC;

class GameScene : public Scene{
public:
	GameScene() :m_offset(Vec2::ZERO), m_totalScore(0), m_doubleBulletsCount(0), m_ufoType(0),m_bombCount(0){}; //��ʼ��
	static Scene* createScene();

	bool init() override;  //���庯������������+������+�����б�

	void update(float delta);

	CREATE_FUNC(GameScene)

private:
	Vec2 m_offset;//��¼��������ɻ�λ�õ�ƫ����

	Vector<Sprite *> m_bullets; //�����Ч�ӵ�...
	Vector<Enemy *> m_enemies; //�����Ч�ɻ�...
	Vector<Sprite *> m_ufos;  //���Ufo
	
	int m_totalScore;         //ͳ�Ʒ���
	int m_doubleBulletsCount; //˫�ӵ���ʣ�෢�����
	int m_ufoType;   //��������
	int m_bombCount; //ը������

	void createBullet(float); //�����ӵ�����
	void createEnemy(const EnemyType&); 

	void createSmallEnemy(float);
	void createMiddleEnemy(float);
	void createBigEnemy(float);
	void createUfo(float); //������Ͷ

	void changeBomb();


};