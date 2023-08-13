int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/
    int i, j;
    for (i = n - 2; i >= 0; --i) {
        if (strcmp(s[i], s[i + 1]) < 0) {
            break;
        }
    }

    if (i < 0) {
        return 0;
    }

    for (j = n - 1; j > i; --j) {
        if (strcmp(s[i], s[j]) < 0) {
            break;
        }
    }


    char *temp = s[i];
    s[i] = s[j];
    s[j] = temp;


    for (int k = i + 1, l = n - 1; k < l; ++k, --l) {
        char *temp = s[k];
        s[k] = s[l];
        s[l] = temp;
    }

    return 1;
}
