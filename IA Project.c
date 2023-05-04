#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int joieFilmSize = 14;
char joieFilm[14][250] = 
{
    "Little Miss Sunshine, 2006  https://www.allocine.fr/film/fichefilm_gen_cfilm=145397.html",

    "Happiness Therapy, 2013  https://www.allocine.fr/film/fichefilm_gen_cfilm=145397.html",

    "Mamma Mia!, 2008 https://www.allocine.fr/film/fichefilm_gen_cfilm=125562.html",

    "Le Sens de la Fête 2017  https://www.allocine.fr/film/fichefilm_gen_cfilm=247291.html",

    "Moonrise Kingdom, 2012  https://www.allocine.fr/film/fichefilm_gen_cfilm=187864.html",

    "Là-haut, 2009  https://www.allocine.fr/film/fichefilm_gen_cfilm=130368.html",

    "Love Actually, 2003 https://www.allocine.fr/film/fichefilm_gen_cfilm=44445.html",

    "Un jour sans fin, 1993  https://www.allocine.fr/film/fichefilm_gen_cfilm=8066.html",

    "Green Book, 2019 https://www.allocine.fr/film/fichefilm_gen_cfilm=256661.html",

    "La Famille Bélier, 2014  https://www.allocine.fr/film/fichefilm_gen_cfilm=214860.html",

    "Rasta Rockett, 1993 https://www.allocine.fr/film/fichefilm_gen_cfilm=9895.html",

    "Pride, 2014  https://www.allocine.fr/film/fichefilm_gen_cfilm=228499.html",

    "Good Morning England, 2009 https://www.allocine.fr/film/fichefilm_gen_cfilm=134316.html",

    "Le Grand Bain, 2018  https://www.allocine.fr/film/fichefilm_gen_cfilm=235582.html"
};

int joieLivreSize = 7;
char joieLivre[7][250] = 
{
    "Demain, j'arrête !,   Gilles Legardinier   https://www.babelio.com/livres/Legardinier-Demain-jarrete-/1445303",

    "Ça peut pas rater,   Gilles Legardinier   https://www.babelio.com/livres/Legardinier-a-peut-pas-rater/638800",
    
    "Demain est un autre jour,   Lori Nelson Spielman    https://www.babelio.com/livres/Nelson-Spielman-Demain-est-un-autre-jour/478832",

    "Vieux, râleur et suicidaire : La vie selon Ove,   Fredrik Backman  https://www.babelio.com/livres/Backman-Vieux-raleur-et-suicidaire--La-vie-selon-Ove/566462",
    
    "Le plus petit baiser jamais recensé,   Mathias Malzieu https://www.babelio.com/livres/Malzieu-Le-plus-petit-baiser-jamais-recense/463406",

    "Tom, petit Tom, tout petit homme, Tom,   Barbara Constantine   https://www.babelio.com/livres/Constantine-Tom-petit-Tom-tout-petit-homme-Tom/157419",

    "Le cercle littéraire des amateurs d'épluchures de patates,   Annie Barrows https://www.babelio.com/livres/Barrows-Le-cercle-litteraire-des-amateurs-depluchures-de-/492788",
};

int degoutFilmSize = 3;
char degoutFilm[3][250] = 
{
    "Vice-Versa, 2015	https://www.allocine.fr/film/fichefilm_gen_cfilm=196960.html",

    "Martyrs, 2008	https://www.allocine.fr/film/fichefilm_gen_cfilm=127913.html",

    "Cannibal Holocaust, 1980	https://www.allocine.fr/film/fichefilm_gen_cfilm=52677.html"
};

int degoutLivreSize =6;
char degoutLivre[6][250] = 
{
    "Terrasse à Rome, Pascal Quignard https://booknode.com/terrasse_a_rome_032658",
    "Les fantômes du château des cartes, Marcel Marien https://booknode.com/les_fantomes_du_chateau_des_cartes_03414795",
    "L'étranger dans sa ville natale, Edouard Limonov https://booknode.com/letranger_dans_sa_ville_natale_01031373",
    "Dégoût, Laetitia Chazel https://www.babelio.com/livres/Chazel-Degout/370508",
    "Du goût & du dégoût, William Hazlitt https://www.babelio.com/livres/Hazlitt-Du-gout-du-degout/813851",
    "Le dégoût : Thomas Bernhard à San Salvador, Horacio Castellanos Moya https://www.babelio.com/livres/Castellanos-Moya-Le-degout--Thomas-Bernhard-a-San-Salvador/97923"
};


int peurFilmSize = 9;
char peurFilm[9][250] = 
{
    "Psychose, 1960   https://www.allocine.fr/film/fichefilm_gen_cfilm=1603.html",

    "Alien, le huitième passager, 1979   https://www.allocine.fr/film/fichefilm_gen_cfilm=62.html",

    "Shining, 1980   https://www.allocine.fr/film/fichefilm_gen_cfilm=863.html",

    "La nuit du chasseur, 1955 https://www.allocine.fr/film/fichefilm_gen_cfilm=4963.html",

    "Freaks, 1932 https://www.allocine.fr/film/fichefilm_gen_cfilm=267126.html",

    "The thing, 2011 https://www.allocine.fr/film/fichefilm_gen_cfilm=1048.html ",

    "Ca, 2017 https://www.allocine.fr/film/fichefilm_gen_cfilm=144685.html",

    "Conjuring: les dossiers de Warren, 2013 https://www.allocine.fr/film/fichefilm_gen_cfilm=203607.html"
};

int peurLivreSize =0;
char peurLivre[][250] = 
{
};

int tristesseFilmSize = 20;
char tristesseFilm[20][250] = 
{
    "Landscape in the Mist, 1988	https://en.wikipedia.org/wiki/Landscape_in_the_Mist",

    "La Liste de Schindler, 1993	https://www.allocine.fr/film/fichefilm_gen_cfilm=9393.html",

    "Le Tombeau des lucioles, 1988	https://www.allocine.fr/film/fichefilm_gen_cfilm=10251.html",
    
    "Elephant Man, 1980	https://www.allocine.fr/film/fichefilm_gen_cfilm=180.html",
    
    "Philadelphia, 1994	https://www.allocine.fr/film/fichefilm_gen_cfilm=9432.html",
    
    "Sur la route de Madison, 1995	https://www.allocine.fr/film/fichefilm_gen_cfilm=12994.html",
    
    "N’oublie jamais, 2004	https://www.allocine.fr/film/fichefilm_gen_cfilm=47422.html",
    
    "Into the wild, 2007	https://www.allocine.fr/film/fichefilm_gen_cfilm=110101.html",
    
    "Big fish, 2003	https://www.allocine.fr/film/fichefilm_gen_cfilm=28644.html",
    
    "P.S : I love you, 2008		https://www.allocine.fr/film/fichefilm_gen_cfilm=111748.html",

    "Landscape in the Mist, 1988	https://en.wikipedia.org/wiki/Landscape_in_the_Mist",
    
    "La Liste de Schindler, 1993	https://www.allocine.fr/film/fichefilm_gen_cfilm=9393.html",
    
    "Le Tombeau des lucioles, 1988	https://www.allocine.fr/film/fichefilm_gen_cfilm=10251.html",
    
    "Elephant Man, 1980	https://www.allocine.fr/film/fichefilm_gen_cfilm=180.html",
    
    "Philadelphia, 1994	https://www.allocine.fr/film/fichefilm_gen_cfilm=9432.html",
    
    "Sur la route de Madison, 1995	https://www.allocine.fr/film/fichefilm_gen_cfilm=12994.html",
    
    "N’oublie jamais, 2004	https://www.allocine.fr/film/fichefilm_gen_cfilm=47422.html",
    
    "Into the wild, 2007	https://www.allocine.fr/film/fichefilm_gen_cfilm=110101.html",
    
    "Big fish, 2003	https://www.allocine.fr/film/fichefilm_gen_cfilm=28644.html",
    
    "P.S : I love you, 2008		https://www.allocine.fr/film/fichefilm_gen_cfilm=111748.html"
};

int tristesseLivreSize = 10;
char tristesseLivre[10][250] = 
{
    "Des souris et des hommes, John Steinbeck	https://www.babelio.com/livres/Steinbeck-Des-souris-et-des-hommes/1426099",

    "Les Misérables, Victor Hugo	https://www.babelio.com/livres/Hugo-Les-Miserables-tome-1/1171044",

    "Si c'est un homme, Primo Levi	https://www.babelio.com/livres/Levi-Si-cest-un-homme/6213",

    "Des fleurs pour Algernon, Daniel Keyes	https://www.babelio.com/livres/Keyes-Des-fleurs-pour-Algernon/5608",

    "La Vie devant soi, Romain Gary	https://www.babelio.com/livres/Gary-La-vie-devant-soi/2978",

    "Mon bel oranger, José Mauro de Vasconcelos	https://www.babelio.com/livres/Vasconcelos-Mon-bel-oranger/8718",

    "L'Écume des jours, Boris Vian	https://www.babelio.com/livres/Vian-LEcume-des-jours/11163",

    "Betty, Tiffany McDaniel	https://www.babelio.com/livres/McDaniel-Betty/1214213",

    "La Ligne verte, Stephen King	https://www.babelio.com/livres/King-La-Ligne-Verte/3739",

    "1984, Frédéric Regard		https://www.babelio.com/livres/Regard-1984-de-George-Orwell/164521"
};


int anxieteFilmSize = 20;
char anxieteFilm[20][250] = 
{
    "Le secret de la petite sirène, 1989  https://www.allocine.fr/film/fichefilm_gen_cfilm=2461.html",

    "Le Roi Lion, 1994  https://www.allocine.fr/film/fichefilm_gen_cfilm=10495.html",

    "Toy Story, 1995 https://www.allocine.fr/film/fichefilm_gen_cfilm=10295.html",

    "Le voyage de Chihiro, 2001  https://www.allocine.fr/film/fichefilm_gen_cfilm=13074.html",

    "Les aventures de Tintin, 2011  https://www.allocine.fr/film/fichefilm_gen_cfilm=125541.html",


    "Friends, 1994-2004  https://www.allocine.fr/series/ficheserie_gen_cserie=1862.html",

    "The Big Bang Theory, 2007-2019  https://www.allocine.fr/series/ficheserie_gen_cserie=9815.html",

    "Grey's Anatomy, 2005-2020  https://www.allocine.fr/series/ficheserie_gen_cserie=159.html",

    "How I Met Your Mother, 2005-2014  https://www.allocine.fr/series/ficheserie_gen_cserie=9167.html",

    "The Good Place, 2016-2020  https://www.allocine.fr/series/ficheserie_gen_cserie=38456.html",

    "Le secret de la petite sirène, 1989  https://www.allocine.fr/film/fichefilm_gen_cfilm=2461.html ",

    "Le Roi Lion, 1994  https://www.allocine.fr/film/fichefilm_gen_cfilm=10495.html ",

    "Toy Story, 1995 https://www.allocine.fr/film/fichefilm_gen_cfilm=10295.html ",

    "Le voyage de Chihiro, 2001  https://www.allocine.fr/film/fichefilm_gen_cfilm=13074.html ",

    "Les aventures de Tintin, 2011  https://www.allocine.fr/film/fichefilm_gen_cfilm=125541.html ",


    "Friends, 1994-2004  https://www.allocine.fr/series/ficheserie_gen_cserie=1862.html ",

    "The Big Bang Theory, 2007-2019  https://www.allocine.fr/series/ficheserie_gen_cserie=9815.html ",

    "Grey's Anatomy, 2005-2020  https://www.allocine.fr/series/ficheserie_gen_cserie=159.html ",

    "How I Met Your Mother, 2005-2014  https://www.allocine.fr/series/ficheserie_gen_cserie=9167.html ",

    "The Good Place, 2016-2020  https://www.allocine.fr/series/ficheserie_gen_cserie=38456.html "
};

int anxieteLivreSize =0 ;
char anxieteLivre[0][250] = 
{
};

int colereFilmSize =6;
char colereFilm[6][250] = 
{
    "The Pursuit of Happyness, 2006     https://www.imdb.com/title/tt0454921/ ",
    "The Shawshank Redemption, 1994 https://www.imdb.com/title/tt0111161/ ",
    "The Secret Garden, 1993 https://www.imdb.com/title/tt0108065/ ",
    "Friends, 1994-2004 https://www.imdb.com/title/tt0108778/ ",
    "The Great British Baking Show, 2010-present https://www.imdb.com/title/tt1833285/ ",
    "Moonlight, 2016 https://www.imdb.com/title/tt4975722/"
};

int colereLivreSize =3;
char colereLivre[3][250] = 
{
    "The Alchemist by Paulo Coelho, 1988 https://www.goodreads.com/book/show/540.The_Alchemist ",
    "The Four Agreements by Don Miguel Ruiz, 1997 https://www.goodreads.com/book/show/4251.The_Four_Agreements ",
    "Peace is Every Step by Thich Nhat Hanh, 1991 https://www.goodreads.com/book/show/6885.Peace_Is_Every_Step "
};





// Function to generate a random number between 0 and max
int generateRandomNumber(int max)
{
    // Seed the random number generator
    // using current time

    // Generate and return a random number
    // between 0 and max
    return rand() % (max + 1);
}

//Prints questions to the user
void askQuestions()
{
    printf("Salut, comment vas-tu aujourd'hui ?\n\n");
    printf("1-Je vais bien\n2-Moyen\n3-Non, je me sens mal\n\n");
    int a;
    scanf("%d",&a);
    if(a == 1)
    {
        int b;
        printf("Est-ce que tu préféres regarder un film et/ou lire un livre aujourdh'hui?\n\n");
        printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
        scanf("%d",&b);
        if(b == 1)
        {
            printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
            for(int i=0; i<5; i++)
            {
                printf("%s\n",joieFilm[generateRandomNumber(joieFilmSize)]);
            }
        }
        if(b == 2)
        {
            printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
            for(int i=0; i<4; i++)
            {
                printf("%s\n",joieLivre[generateRandomNumber(joieLivreSize)]);
            }
        }
        if(b == 3)
        {
            printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
            for(int i=0; i<5; i++)
            {
                printf("%s\n",joieFilm[generateRandomNumber(joieFilmSize)]);
            }
            printf("\n\n"); 
            printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
            for(int i=0; i<5; i++)
            {
                printf("%s\n",joieLivre[generateRandomNumber(joieLivreSize)]);
            }

        }
    }
    
    if(a == 2)
    {
        int c;
        printf("Qu'est-ce qui te tracasse?\n\n");
        printf("1-Je suis anxieux\n2-Je suis triste\n3-Je suis en colère\n4-J'ai peur\n\n");
        scanf("%d",&c);
        if(c==1 || c==2 || c==3 || c==4)
        {
            int e;
            printf(" Nous allons essayer de t'aider, nous aimerions d'abord savoir si:\n\n");
            printf("1-Je veux continuer à être dans cette humeur\n2-Je veux changer mon humeur en humeur positive\n\n");
            scanf("%d",&e);
            if(e == 1)
            {
                if(c==1)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",anxieteFilm[generateRandomNumber(anxieteFilmSize)]);
                        }
                    }
                    printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                    if(d == 2)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",anxieteLivre[generateRandomNumber(anxieteLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",anxieteFilm[generateRandomNumber(anxieteFilmSize)]);
                        }
                        printf("\n\n");
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",anxieteLivre[generateRandomNumber(anxieteLivreSize)]);
                        }
                    }
                }
                if(c==2)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",tristesseFilm[generateRandomNumber(tristesseFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",tristesseLivre[generateRandomNumber(tristesseLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",tristesseFilm[generateRandomNumber(tristesseFilmSize)]);
                        }
                        printf("\n\n");
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",tristesseLivre[generateRandomNumber(tristesseLivreSize)]);
                        }
                    }
                }
                if(c==3)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",colereFilm[generateRandomNumber(colereFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {   
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",colereLivre[generateRandomNumber(colereLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",colereFilm[generateRandomNumber(colereFilmSize)]);
                        }
                        printf("\n\n");
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",colereLivre[generateRandomNumber(colereLivreSize)]);
                        }
                    }
                }
                if(c==4)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",peurFilm[generateRandomNumber(peurFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",peurLivre[generateRandomNumber(peurLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",peurFilm[generateRandomNumber(peurFilmSize)]);
                        }
                        printf("\n\n");
                        printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                        for(int i=0; i<5; i++)
                        {
                            printf("%s\n",peurLivre[generateRandomNumber(peurLivreSize)]);
                        }
                    }
                }
            }
            if(e == 2)
            {
                printf("Très bien je vais essayer de te changer les esprits. Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                int d;
                printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                scanf("%d",&d);

                if(d == 1)
                {
                    printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");
                    for(int i=0; i<5; i++)
                    {
                        printf("%s\n",joieFilm[generateRandomNumber(joieFilmSize)]);
                    }
                }
                if(d == 2)
                {
                    printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                    for(int i=0; i<5; i++)
                    {
                        printf("%s\n",joieLivre[generateRandomNumber(joieLivreSize)]);
                    }
                }
                if(d==3)
                {        
                    printf("Voici une séléction de films qui pourraient vous intéresser:\n\n");               
                    for(int i=0; i<5; i++)
                    {
                        printf("%s\n",joieFilm[generateRandomNumber(joieFilmSize)]);
                    }
                    printf("\n\n");
                    printf("Voici une séléction de livres qui pourraient vous intéresser:\n\n");
                    for(int i=0; i<5; i++)
                    {
                        printf("%s\n",joieLivre[generateRandomNumber(joieLivreSize)]);
                    }
                }
            }
        }
    }
    if(a == 3)
    {
        int c;
        printf("Quelle humeur te définit le mieux?\n\n");
        printf("1-Colère\n2-Tristesse\n3-Anxiété\n4-Peur\n\n");     
        scanf("%d",&c);       
        if(c==1 || c==2 || c==3 || c==4)
        {  
            int e;
            printf(" Nous allons essayer de t'aider, nous aimerions d'abord savoir si:\n");
            printf("1-Je veux continuer à être dans cette humeur\n2-Je veux changer mon humeur en humeur positive\n\n");
            scanf("%d",&e);
            if(e == 1)
            {
                if(c==1)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",anxieteFilm[generateRandomNumber(anxieteFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",anxieteLivre[generateRandomNumber(anxieteLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",anxieteFilm[generateRandomNumber(anxieteFilmSize)]);
                        }
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",anxieteLivre[generateRandomNumber(anxieteLivreSize)]);
                        }
                    }
                }

                if(c==2)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",tristesseFilm[generateRandomNumber(tristesseFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",tristesseLivre[generateRandomNumber(tristesseLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",tristesseFilm[generateRandomNumber(tristesseFilmSize)]);
                        }
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",tristesseLivre[generateRandomNumber(tristesseLivreSize)]);
                        }
                    }
                }
                
                if(c==3)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",colereFilm[generateRandomNumber(colereFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {   
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",colereLivre[generateRandomNumber(colereLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",colereFilm[generateRandomNumber(colereFilmSize)]);
                        }
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",colereLivre[generateRandomNumber(colereLivreSize)]);
                        }
                    }
                }
                if(c==4)
                {
                    int d;
                    printf("Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                    printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                    scanf("%d",&d);
                    if(d == 1)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",peurFilm[generateRandomNumber(peurFilmSize)]);
                        }
                    }
                    if(d == 2)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",peurLivre[generateRandomNumber(peurLivreSize)]);
                        }
                    }
                    if(d==3)
                    {
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",peurFilm[generateRandomNumber(peurFilmSize)]);
                        }
                        for(int i=0; i<5; i++)
                        {
                            printf("%s",peurLivre[generateRandomNumber(peurLivreSize)]);
                        }
                    }
                }
            }
            if(e == 2)
            {
                printf("Très bien je vais essayer de te changer les esprits. Est-ce que tu préfére regarder un film et/ou lire un livre aujourdh'hui?\n\n");
                int d;
                printf("1-Un film\n2-Un livre\n3-Les deux\n\n");
                scanf("%d",&d);

                if(d == 1)
                {
                    for(int i=0; i<5; i++)
                    {
                        printf("%s",joieFilm[generateRandomNumber(joieFilmSize)]);
                    }
                }
                if(d == 2)
                {
                    for(int i=0; i<5; i++)
                    {
                        printf("%s",joieLivre[generateRandomNumber(joieLivreSize)]);
                    }
                }
                if(d==3)
                {                       
                    for(int i=0; i<5; i++)
                    {
                        printf("%s",joieFilm[generateRandomNumber(joieFilmSize)]);
                    }
                    for(int i=0; i<5; i++)
                    {
                        printf("%s",joieLivre[generateRandomNumber(joieLivreSize)]);
                    }
                }
            }
        }
    }
}


int main()
{

    srand(time(NULL));
    askQuestions();
    return 0;
}
