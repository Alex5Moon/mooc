#include<stdio.h>
int main(void)
{
	
	return 0;	
}

int MaxSubseqSum1(int A[], int N)   // T(N) = O(N^3)
{
	int ThisSum, MaxSum = 0;
	int i, j, k;
	for( i=0; i<N; i++){             // i���������λ��
		for( j=i; j<N; j++){         // j�������Ҷ�λ�� 
			ThisSum = 0;             // ThisSum �Ǵ�A[i]��A[j]�����к� 
			for( k=i; k<=j; k++)    
				ThisSum += A[k];
			if( ThisSum > MaxSum)    // ����յõ���������к͸���
				MaxSum = ThisSum;	 // ����½�� 
		}  // j ѭ������
	}  // i ѭ������
	return MaxSum;
}

int MaxSubseqSum2(int A[], int N)  //  T(N) = O(N^2)
{
	int ThisSum, MaxSum = 0;
	int i, j;
	for( i=0; i<N; i++){             // i���������λ��
		ThisSum = 0;                 // ThisSum �Ǵ� A[i]��A[j]�����к�
		for( j=i; j<N; j++){         // j�������Ҷ�λ�� 
			ThisSum += A[j];        
			// ������ͬ��i����ͬ��j��ֻҪ�� j-1 ��ѭ���Ļ������ۼ�1���
			if(ThisSum > MaxSum)     // ����յõ���������к͸���
				MaxSum = ThisSum;	 // ����½�� 
		}	// j ѭ������	
	} // i ѭ������
	return MaxSum;
}

int MaxSubseqSum3(int A[], int N)  //  T(N) = O(NlogN)
{   // �ֶ���֮
	return 0;
}		

int MaxSubseqSum4(int A[], int N)  //  T(N) = O(N)
{	// ���ߴ���
	int ThisSum, MaxSum = 0;
	int i;
	ThisSum = MaxSum = 0;
	for( i=0; i<N; i++)
	{
		ThisSum += A[i];             // �����ۼ�
		if( ThisSum > MaxSum)
			MaxSum = ThisSum;        // ���ָ���ĺ�����µ�ǰ���
		else if( ThisSum < 0)        // �����ǰ���к�Ϊ��
			ThisSum = 0;	  // ����ʹ����Ĳ��ֺ���������֮
	}
	return MaxSum;
}		
