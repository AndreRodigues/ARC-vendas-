#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>



struct Produtos {
	char nome[30];
	float valor;
	int ref;
};
void *retornoTroco(float pago, float carrinho);
int Cadastro(char login[10], char senha[10]);
int oqFazer(int opcoes);
void imprimirDados(char dados[200]);
void imprimirMenu(char menu[250]);
void errorLogin(char incorrero[30]);
void sairSistema(char sairs[30]);
void prods(struct Produtos p[30]);
void casoop(int opcao,struct Produtos p[30]);
char curruculo();
int decisao(int opi);
void smarthpones(struct Produtos p[30]);
void televisores(struct Produtos p[30]);
void nots(struct Produtos p[30]);
void livros(struct Produtos p[30]);
void games(struct Produtos p[30]);
char feedback();
void contato();
void compra(int opcoes, struct Produtos p[30]);
int main(){
	int opcoes;
	char menu[250];

	system("color 3F");

	setlocale(LC_ALL, "Portuguese");

	imprimirMenu(menu);
	oqFazer(opcoes);



return 0;
}
int Cadastro(char login[10], char senha[10]){
int x,y,z,op;
char user1[10],senha1[10];

    	system("cls");
    	printf("Digite 1 para se cadastrar\nDigite 2 caso já tenha se cadastrado\nOpcao: ");
    	scanf("%d",&op);
    	if(op == 1){
    	system("cls");
    	printf("Bem vindo ao sistema de cadastro");
    	printf("\nDigite a baixo um usuario e senha para se cadastrar\n\n");
    	printf("usuario: ");
    	scanf("%s",login);
    	printf("senha: ");
    	scanf("%s",senha);
    	system("cls");
    	printf("Cadastro efetuado com sucesso\nDigite abaixo seu usuario e senha");
    	printf("\nUsuario: ");
    	scanf("%s",user1);
    	printf("senha: ");
    	scanf("%s",senha1);
     	x = strcmp(login,user1);
 	y = strcmp(senha,senha1);
 	if ((x == 0)&&(y == 0)){
    	return z = 0;
 	}else{
 	return z = 1;
 	}
 	}else if(op == 2){
    	system("cls");
    	printf("Usuario: ");
    	scanf("%s",login);

    	printf("Senha: ");
    	scanf("%s",senha);

    	system("cls");
    	printf("Digite novamente para confirmar o login");
    	puts("\n");

    	printf("\nUsuario: ");
    	scanf("%s",user1);

    	printf("Senha: ");
    	scanf("%s",senha1);
     	x = strcmp(login,user1);
 	y = strcmp(senha,senha1);
 	if ((x == 0)&&(y == 0)){
    	return z = 0;
 	}else{
 	return z = 1;
 	}
 	}
}
int oqFazer(int opcoes){
int conf,fs,opcao,pr,opi,u;
char login[10],senha[10],dados[200],incorrero[30],sairs[30];
char a, b, *x;
float carrinho=0,pago,qtd,pm=0;
 int op,i,z;
struct Produtos p[30];
	switch(opcoes){

case 1:
	system("cls");
	conf = Cadastro(login,senha);
	if(conf == 0){
    	printf("\n\nLOGADO\n");
    	printf("\nDigite 1 para voltar ao menu\nDigite 2 para sair de nossa loja\nopcao: ");
    	scanf("%d",&fs);
    	system("cls");
     	if(fs == 1){
        	return main();
    	}else{
        	sairSistema(sairs);
    	return 0;
    	}

    	}else{
	errorLogin(incorrero);
        	return main();
    	}
break;
case 2:
   compra(opcoes,p);
	break;
case 3:
prods(p);
	break;
case 4:

	imprimirDados(dados);
	printf("Digite 1 para voltar ao menu\nDigite 2 para sair de nossa loja\nOpcao: ");
	scanf("%d",&fs);
	system("cls");
 	if(fs == 1){
        	return main();
    	}else{
    	sairSistema(sairs);
    	return 0;

    	}
	break;
case 5:
curruculo();
	break;
case 6:
	feedback();
	decisao(opi);
	return 0;
	break;
case 7:
	contato();
	decisao(opi);
	break;
case 0:

	sairSistema(sairs);
	system("pause");
	return 0;
	break;
default:
    system("cls");
    printf("opção invalida");
    return main();
    break;
	}

}
void imprimirDados(char dados[200]){
	system("cls");
	printf("Cidade: Cachoeiro de Itapemirim\nBairro: IBC\nRua: Rua das Luzes");
	printf("\n\n~~ AndAPP ~~");
	printf("\nSomos dois alunos do 1º Periodo do Curso Superior de Sistemas de Informação, no Campus Cachoeiro de Itapemirim(IFES).");
	printf("\nA AndAPP oferece desenvolvimento de apps mobile, softwares em código aberto e outros diversos aplicativos.");
	printf("\nEntre em contato conosco e peça já o seu Aplicativo.");
	puts("\n\n");
}
void imprimirMenu(char menu[250]){
	int opcoes;
	printf("\n<+-+-+-+-+-+-+-+-+-+-+-+-+-+-+>");
	printf("\n|                         	|*>");
	printf("\n|   	SEJA BEM-VINDO    	|*>");
	printf("\n|                         	|*>");
	printf("\n°+-+-+-+-+-+-+-+-+-+-+-+-+-+-+°");
	printf("\n");
	printf("\n->  **************  <-");
	printf("\n->  ** LOJA ARC **  <-");
	printf("\n->  **************  <-");
	puts("\n");
	printf(" +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ ");
	printf("\n| DIGITE 1 PARA SE CADASTRAR EM NOSSA LOJA E/OU FAZER LOGIN                     	|");
	printf("\n| DIGITE 2 PARA REALIZAR UMA COMPRA EM NOSSA LOJA                               	|");
	printf("\n| DIGITE 3 PARA VER OS PRODUTOS QUE TEMOS NA LOJA                               	|");
	printf("\n| DIGITE 4 PARA SABE MAIS SOBRE NÓS(CRIADORES DO PROGRAMA)                      	|");
	printf("\n| DIGITE 5 PARA SABER COMO TRABALHAR CONOSCO                                    	|");
	printf("\n| DIGITE 6 PARA ENVIAR UM FEEDBACK DO SISTEMA, SEJA ELE POSITIVO OU NEGATIVO.   	|");
	printf("\n| DIGITE 7 PARA ENTRA EM CONTATO CONOSCO                                        	|");
	printf("\n| DIGITE 0 PARA SAIR DO SISTEMA                                                 	|");
	printf("\n$+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+$");
	puts("\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n| | | | | | | | | | | | | | |");
	printf("\nV V V V V V V V V V V V V V V");
	printf("\n");
	printf("\nDIGITE A OPÇÃO ESCOLHIDA AQUI: ");
	scanf("%d",&opcoes);
	oqFazer(opcoes);
}
void errorLogin(char incorrero[30]){
    	system("cls");
    	printf("USUARIO OU SENHA INCORRETOS\n\n");
}
void sairSistema(char sairs[30]){
    	system("cls");
    	printf("OBRIGADO POR USAR NOSSO SISTEMA\n");
}
void *retornoTroco(float pago, float carrinho){
	float troco;
	int opi;
	troco = pago - carrinho;
	if (troco >= 0){
	printf("\nTroco: %.2f",troco);
}else{
	system("cls");
	printf("VENDA INCOMPLETA");
	decisao(opi);
}
}
void prods(struct Produtos p[20]){
int opi,o;
 	system("cls");
  	printf("Digite 1 para Smartphones\nDigite 2 para Notebooks\nDigite 3 para Smart Tvs\nDigite 4 para Jogos\nDigite 5 para Livros\nOpção: ");
   scanf("%d",&o);
	if(o == 1){
	smarthpones(p);
	}else if (o == 2){
	nots(p);
	}else if( o == 3 ){
  televisores(p);
	}else if(o == 4){
        	games(p);
	}else if( o == 5){
         	livros(p);
         	}else{
	printf("CATEGORIA INDISPONIVEL");
	}
	decisao(opi);
}

char curruculo(){
 int i,j,opi,opii;
	char matriz[30][30][30];
	system("cls");
	printf("Para trabalhar conosco é necessário que preencha uma ficha com algunas dados,\npara que possamos entrar em contato com você");
	puts("\n\n");
	printf("DIGITE 1 PARA PREENCHER A FICHA DE INSCRÇÃO\nDIGITE 2 PARA VOLTAR AO MENU\n");
	printf("\nDIGITE A OPÇÃO AQUI: ");
	scanf("%d",&opii);
	system("cls");
	if (opii == 1){
	getchar();
	printf("Nome: ");
	scanf("%[^\n]s",matriz[0][1]);
    getchar();
	printf("CPF: ");
	scanf("%s",matriz[0][2]);

	printf("TELEFONE: ");
	scanf("%s",matriz[0][3]);


	system("cls");
	printf("NOME: %s ",matriz[0][1]);
	printf("\nCPF: %s ",matriz[0][2]);
	printf("\nTELEFONE: %s ",matriz[0][3]);

	printf("\n\nInscricao feita com sucesso\n");
	printf("Envie seu curriculo para andrerodriguestiarc@gmail.com ou contato.andreyy@gmail.com \n");
	printf("Entraremos em contato em no máFximo uma semana, caso voce tenha sido escolhido. BOA SORTE!!!");
	}else {
	return main();
	}
	decisao(opi);
}
int decisao(int opi){
printf("\n\nDIGITE 1 PARA VOLTAR AO MENU\n\nDIGITE 2 PARA ENCERRAR O PROGRAMA\n\nOpcao: ");
	scanf("%d",&opi);
	if(opi == 1){
        	system("cls");
    	return main();
	}else
	system("cls");
	printf("OBRIGADO POR USAR NOSSO SISTEMA!\n");
	return 0;
}
void smarthpones(struct Produtos p[30]){
 system("cls");
 	strcpy(p[0].nome,"Samsung Galaxy J5 Prime");

	strcpy(p[1].nome,"Samsung Galaxy J8");

	strcpy(p[2].nome,"Asus zenfone 5");

	strcpy(p[3].nome,"Iphone 6s");

	strcpy(p[4].nome,"Iphone 7 plus");

	strcpy(p[5].nome,"Iphone X plus");

	printf("produto: %s",p[0].nome);
	puts("\n");

	printf("produto: %s",p[1].nome);
	puts("\n");

	printf("produto: %s",p[3].nome);
	puts("\n");

	printf("produto: %s",p[4].nome);
	puts("\n");

	printf("produto: %s",p[5].nome);
	puts("\n");

}
void televisores(struct Produtos p[30]){
system("cls");
	strcpy(p[12].nome,"Smart TV LED 43 Philco Full HD");

	strcpy(p[13].nome,"Smart TV LED 50 Philco FULL HD");

	strcpy(p[14].nome,"Smart TV LED 32 SONY FULL HD");

	strcpy(p[15].nome,"Smart TV 43 LG FULL HD");

	strcpy(p[16].nome,"Smart TV LED 32 Samsumg HD");

	printf("produto: %s",p[12].nome);
	puts("\n");

	printf("produto: %s",p[13].nome);
	puts("\n");

	printf("produto: %s",p[14].nome);
	puts("\n");

	printf("produto: %s",p[15].nome);
	puts("\n");

	printf("produto: %s",p[16].nome);
	puts("\n");
}
void nots(struct Produtos p[30]){
system("cls");
	strcpy(p[6].nome,"Notebook Samsung Expert X40""i5 8GB 1TB");

	strcpy(p[7].nome,"Notebook Expert VF3BR"" i7 8GB 1TB");

	strcpy(p[8].nome,"Notebook Samsung Expert X30"" i5 8GB 1TB");

	strcpy(p[9].nome,"Notebook Dell Inspiron"" i5 4GB 1TB");

	strcpy(p[10].nome,"Notebook Acer A515-51-55QD"" i5 4GB 1TB");

	strcpy(p[11].nome,"Notebook Inspiron Ultrafino" " i7 16GB 1TB");



	printf("produto: %s",p[6].nome);
	puts("\n");

	printf("produto: %s",p[7].nome);
	puts("\n");

	printf("produto: %s",p[8].nome);
	puts("\n");

	printf("produto: %s",p[9].nome);
	puts("\n");

	printf("produto: %s",p[10].nome);
	puts("\n");

	printf("produto: %s",p[11].nome);
	puts("\n");
}
void games(struct Produtos p[30]){
 	system("cls");

	strcpy(p[17].nome,"FIFA 19 - XBOX ONE");

	strcpy(p[18].nome,"Grand Theft Auto V - XBOX ONE");

	strcpy(p[19].nome,"Pro Evolutiion Soccer 19 - XBOX ONE");

	strcpy(p[20].nome,"God Of War III - PS4");

	strcpy(p[21].nome,"Mortal Kombat X - PS4");

	printf("produto: %s",p[17].nome);
	puts("\n");

	printf("produto: %s",p[18].nome);
	puts("\n");

	printf("produto: %s",p[19].nome);
	puts("\n");

	printf("produto: %s",p[20].nome);
	puts("\n");

	printf("produto: %s",p[21].nome);
	puts("\n");

}
void livros(struct Produtos p[30]){
	system("cls");

	strcpy(p[22].nome,"Livro - A Cinco Passos de Voce");

	strcpy(p[23].nome,"Livro - A Casa de Vidro");

	strcpy(p[24].nome,"Livro - O Pequeno Principe");

	strcpy(p[25].nome,"Livro - Palido Ponto Azul");

	strcpy(p[26].nome,"Livro - Star Wars Dark Edition");

	strcpy(p[27].nome,"Livro - Mister");

	printf("produto: %s",p[22].nome);
	puts("\n");

	printf("produto: %s",p[23].nome);
	puts("\n");

	printf("produto: %s",p[24].nome);
	puts("\n");

	printf("produto: %s",p[25].nome);
	puts("\n");

	printf("produto: %s",p[26].nome);
	puts("\n");

	printf("produto: %s",p[27].nome);
	puts("\n");
}

char feedback(){
 char a[1000], b[1000];
 int opi;
    	system("cls");
    	printf("Envie seu FEEDBACK");
    	getchar();
    	puts("\n");
    	printf("FEEDBACK POSITIVO: ");
    	scanf("%[^\n]s", &a);
    	getchar();
    	puts("\n");
    	printf("FEEDBACK NEGATIVO: ");
    	scanf("%[^\n]s", &b);
    	getchar();
    	system("cls");

    	printf(" _____________________");
    	printf("\n|FEEDBACKS DO SISTEMA.|");
    	puts("\n");
    	printf("POSITIVO: %s", &a);
    	puts("\n");
    	printf("NEGATIVO: %s", &b);
    	puts("\n");
    	printf("\n#################################");
    	printf("\n#################################");
    	printf("\n##    OBRIGADO PELO FEEDBACK   ##");
    	printf("\n##   TODA CRITICA E BEM VINDA  ##");
    	printf("\n##    	VOLTE SEMPRE! :)       ##");
    	printf("\n#################################");
    	printf("\n#################################");
    	puts("\n\n\n\n");

    	decisao(opi);
}


void contato(){
	system("cls");
	printf("Para contratar nossos servico ou pedir suporte para algum aplicativo entre em contato por telefone ou e-mail.");
	printf("\n\nTelefone: 028 99969-9046 > E/OU < 021 99064-6041");
	printf("\nEmail: AndAPP@gmail.com");



}
void compra(int opcoes, struct Produtos p[30]){

int conf,fs,opcao,pr,opi,u;
char login[10],senha[10],dados[200],incorrero[30],sairs[30],endereco[1000];
char a, b, x;
float carrinho=0,pago,qtd,pm=0,*tot;
 int op,i,z;


do{

	system("cls");
   printf("Digite 1 para Smartphones\nDigite 2 para Notebooks\nDigite 3 para Smart Tvs\nDigite 4 para Jogos\nDigite 5 para Livros\nOpcao: ");
   scanf("%d",&pr);
	strcpy(p[0].nome,"Samsung Galaxy J5 Prime");
	p[0].valor = 599.00;
	p[0].ref = 1535;

	strcpy(p[1].nome,"Samsung Galaxy J8");
	p[1].valor = 1036.00;
	p[1].ref = 1536;

	strcpy(p[2].nome,"Asus Zenfone 5");
	p[2].valor = 1345.00;
	p[2].ref = 1537;

	strcpy(p[3].nome,"Iphone 6s");
	p[3].valor = 1799.00;
	p[3].ref = 1538;

	strcpy(p[4].nome,"Iphone 7 Plus");
	p[4].valor = 2879.00;
	p[4].ref = 1539;

	strcpy(p[5].nome,"Iphone X Plus");
	p[5].valor = 3459.00;
	p[5].ref = 1540;

	strcpy(p[6].nome,"Notebook Samsumg Expert x40 i5");
	p[6].valor = 2429.99;
	p[6].ref = 1541;

	strcpy(p[7].nome,"Notebook Expert VF3BR i7");
	p[7].valor = 2789.80;
	p[7].ref = 1542;

	strcpy(p[8].nome,"Notebook Samsung Expert X30 i5");
	p[8].valor = 3099.00;
	p[8].ref = 1543;

	strcpy(p[9].nome,"Notebook Dell Inspiron i5");
	p[9].valor = 2393.43;
	p[9].ref = 1544;

	strcpy(p[10].nome,"Notebook Acer i5");
	p[10].valor = 2429.90;
	p[10].ref = 1545;

	strcpy(p[11].nome,"Notebook Inspiron Ultrafino i7");
	p[11].valor = 4494.14;
	p[11].ref = 1546;

	strcpy(p[12].nome,"Smart TV LED 43 Philco Full HD");
	p[12].valor = 1340.10;
	p[12].ref = 1547;

	strcpy(p[13].nome,"Smart TV LED 50 Philco FULL HD");
	p[13].valor = 1599.00;
	p[13].ref = 1548;

	strcpy(p[14].nome,"Smart TV LED 32 SONY FULL HD");
	p[14].valor = 1999.99;
	p[14].ref = 1549;

	strcpy(p[15].nome,"Smart TV 43 LG FULL HD");
	p[15].valor = 2287.10;
	p[15].ref = 1550;

	strcpy(p[16].nome,"Smart TV LED 32 Samsumg HD");
	p[16].valor = 1709.90;
	p[16].ref = 1551;

	strcpy(p[17].nome,"FIFA 19 - XBOX ONE");
	p[17].valor = 84.99;
	p[17].ref = 1552;

	strcpy(p[18].nome,"Grand Theft Auto V - XBOX ONE");
	p[18].valor = 89.01;
	p[18].ref = 1553;

	strcpy(p[19].nome,"Pro Evolutiion Soccer 19 - XBOX");
	p[19].valor = 121.32;
	p[19].ref = 1554;

	strcpy(p[20].nome,"God of War III - PS4");
	p[20].valor = 31.41;
	p[20].ref = 1555;

	strcpy(p[21].nome,"Mortal Kombat X - PS4");
	p[21].valor = 49.99;
	p[21].ref = 1556;

	strcpy(p[22].nome,"Livro - A Cinco Passos de voce");
	p[22].valor = 21.51;
	p[22].ref = 1557;

	strcpy(p[23].nome,"Livro - A Casa de Vidro");
	p[23].valor = 35.99;
	p[23].ref = 1558;

	strcpy(p[24].nome,"Livro - O Pequeno Principe");
	p[24].valor = 57.52;
	p[24].ref = 1559;

	strcpy(p[25].nome,"Livro - Palido Ponto Azul");
	p[25].valor = 36.20;
	p[25].ref = 1560;

	strcpy(p[26].nome,"Livro - Star Wars Dark Edition");
	p[26].valor = 61.99;
	p[26].ref = 1561;

	strcpy(p[27].nome,"Livro - Mister");
	p[27].valor = 31.20;
	p[27].ref = 1562;

	if(pr == 1){
	system("cls");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[0].nome,p[0].valor,p[0].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[1].nome,p[1].valor,p[1].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[2].nome,p[2].valor,p[2].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[3].nome,p[3].valor,p[3].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[4].nome,p[4].valor,p[4].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[5].nome,p[5].valor,p[5].ref);
	}else if(pr == 2){
	system("cls");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[6].nome,p[6].valor,p[6].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[7].nome,p[7].valor,p[7].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[8].nome,p[8].valor,p[8].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[9].nome,p[9].valor,p[9].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[10].nome,p[10].valor,p[10].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[11].nome,p[11].valor,p[11].ref);
	}else if( pr == 3){
	system("cls");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[12].nome,p[12].valor,p[12].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[13].nome,p[13].valor,p[13].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[14].nome,p[14].valor,p[14].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[15].nome,p[15].valor,p[15].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[16].nome,p[16].valor,p[16].ref);
	}else if(pr == 4){
	system("cls");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[17].nome,p[17].valor,p[17].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[18].nome,p[18].valor,p[18].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[19].nome,p[19].valor,p[19].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[20].nome,p[20].valor,p[20].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[21].nome,p[21].valor,p[21].ref);
	}else if (pr == 5){
	system("cls");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[22].nome,p[22].valor,p[22].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[23].nome,p[23].valor,p[23].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[24].nome,p[24].valor,p[24].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[25].nome,p[25].valor,p[25].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[26].nome,p[26].valor,p[26].ref);
	puts("\n");

	printf("Produto: %s\nPreço: %.2f \nReferencia: %d ",p[27].nome,p[27].valor,p[27].ref);
	puts("\n");

	}else{
    	printf("> CATEGORIA INDISPONIIVEL <");
	}



	printf("\n\nReferencia: ");
	scanf("%d",&opcao);
	system("cls");
	switch (opcao){


case 1535:
	i=0;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;

    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
case 1536:
	i=1;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
case 1537:
	i=2;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;

	case 1538:
	i=3;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1539:
	i=4;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1540:
	i=5;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1541:
	i=6;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1542:
	i=7;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1543:
	i=8;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1544:
	i=9;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
case 1545:
	i=10;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;

	case 1546:
	i=11;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1547:
	i=12;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1548:
	i=13;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1549:
	i=14;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1550:
	i=15;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1551:
	i=16;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1552:
	i=17;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
case 1553:
	i=18;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;

	case 1554:
	i=19;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1555:
	i=20;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1556:
	i=21;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1557:
	i=22;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1558:
	i=23;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1559:
	i=24;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
     	case 1560:
	i=25;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);

    	break;
    	case 1561:
	i=26;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);
	break;
	case 1562:
	i=27;
    	printf("Produto: %s\nPreço: %.2f \nReferencia: %d \n",p[i].nome,p[i].valor,p[i].ref);
    	printf("quantidade: ");
    	scanf("%f",&qtd);
    	carrinho = carrinho + p[i].valor*qtd;
    	printf("valor a pagar até o momento: %.2f",carrinho);
	break;
    	default:
        	printf("PRODUTO NAO ENCONTRADO\n");
        	decisao(opi);
        	break;
	}
printf("\n1 PARA CONTINUAR COMPRANDO\n2 PARA PARAR E PAGAR\nOpcao: ");
scanf("%d",&op);
}while(op ==1  );
    	system("cls");
    	printf("Valor a pagar : %.2f",&tot);
    	printf("\nCom quanto deseja pagar: ");
    	scanf("%f",&pago);
    	tot = retornoTroco(pago,carrinho);




	if(pago >= carrinho){
    	getchar();
    	puts("\n");
    	printf("Endereco para entrega: ");
    	scanf("%[^\n]s", endereco);
    	getchar();
    	puts("\n");


    	printf("\n\n");

    	printf("Seu produto chegara no Endereco: %s em no maximo 3 dias.", endereco);
    	printf("\nObrigado por comprar conosco. :)");
    	printf("\n\nAPROVEITE O PRODUTO.");
    	decisao(opi);
	}else{

}
}
