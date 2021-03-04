#define MAX 1005

int dp[MAX][MAX];
int N, M, L;
char *str1;
char *str2;
char *str3;

bool calculate(int i, int j){
    int k = i + j, found = 0;
    if(k == L) return true;
    if(dp[i][j] >= 0) return dp[i][j];

    found = 0;
    if(str1[i] == str3[k]){
        found |= calculate(i + 1, j);
    } 
    if(str2[j] == str3[k]){
        found |= calculate(i, j+1);
    }

    dp[i][j] = found;
    return dp[i][j];
}

bool isInterleave(char * s1, char * s2, char * s3){
    int i, j;
    str1 = s1;
    str2 = s2;
    str3 = s3;
    N = strlen(s1);
    M = strlen(s2);
    L = strlen(s3);

    for(i = 0; i <= N; i++)
        for(j = 0; j <= M; j++)
            dp[i][j] = -1;

    if (N + M != L) return false;
    return calculate(0,0);
}