double calculate_avg_mark(int* marks, int count) {

	
	double sum = 0;
	for (int i = 0; i <= count; i++) {
		sum += marks[i];
	}
	return sum / count;
}