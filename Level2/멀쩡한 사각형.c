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

	answer = (long long)w*h - small * (h / small + w / small - 1);
	return answer;
}