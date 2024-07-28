/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message =
"\x1b[38;2;150;117;249m __________________ \n"
"\x1b[38;2;117;137;249m < Come back soon! >\n"
"\x1b[38;2;117;223;249m ------------------ \n"
"\x1b[38;2;117;249;196m        \\   ^__^\n"
"\x1b[38;2;117;249;177m         \\  (..)\\_______\n"
"\x1b[38;2;117;249;196m            (__)\\       )\\/\\\n"
"\x1b[38;2;117;249;150m             U ||----w |\n"
"\x1b[38;2;137;249;117m                ||     ||\n"
;

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-misc-jetbrainsmononl nf-bold-r-normal--0-0-0-0-p-0-koi8-uni";

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=20;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
