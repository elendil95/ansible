static const char norm_fg[] = "#f5e5c6";
static const char norm_bg[] = "#090b1b";
static const char norm_border[] = "#aba08a";

static const char sel_fg[] = "#f5e5c6";
static const char sel_bg[] = "#D9A857";
static const char sel_border[] = "#f5e5c6";

static const char urg_fg[] = "#f5e5c6";
static const char urg_bg[] = "#D46254";
static const char urg_border[] = "#D46254";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
