using namespace std;

long long solution(int w, int h) {
	long long answer = 1;
	int big = w > h ? w : h;
	int small = w > h ? h : w;

	while (1) {
		int mod = big % small;

		if (mod == 0) {
			break;
		}

		big = small;
		small = mod;
	}

	answer = w * h - small * small;

	return answer;
}