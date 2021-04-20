#include"header/pacman.h"

int score(int mat, int brs, int klm, int p){
	if (mat==5){
		p++;
		_beginthread(score_sound,0,NULL);
	}
	return p;
}

void view_score(int p){
	char msg[3];
	settextstyle(1, 0, 1);
	sprintf(msg, "score: %d", p);
	outtextxy(100,0,msg);
}

void finish(int p, int l){
	if(l == 1){
		if(p == 10){
			next_level();
		}
	}else if(l == 2){
		if(p == 20){
			next_level();
		}
	}else if(l == 3){
		if(p == 30){
			next_level();
		}
	}else if(l == 4){
		if(p == 40){
			next_level();
		}
	}else if(l == 5){
		if(p == 50){
			next_level();
		}
	}
}

void view_level(int l){
	char msg[128];
	settextstyle(1, 0, 1);
	sprintf(msg, "level: %d", l);
	outtextxy(0,0,msg);
}

void winner_view(int l){
	cleardevice();
	readimagefile("assets//img//game//youwin.jpg", fullscreen);
	delay(2000);
}

void view_leaderboard()
{
	int x,y;

	readimagefile("assets//img//game//egyp.jpg",fullscreen);

	x=300;
	y=180;
	readimagefile("assets//img//game//nama.jpg",x,y,400+x,300+y);

	x=700;
	y=180;
	readimagefile("assets//img//game//score.jpg",x,y,400+x,300+y);

	x=600;
	y=550;
	readimagefile("assets//img//game//back.jpg",x,y,150+x,50+y);

}