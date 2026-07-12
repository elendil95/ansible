const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090b1b", /* black   */
  [1] = "#D46254", /* red     */
  [2] = "#D9A857", /* green   */
  [3] = "#F49E68", /* yellow  */
  [4] = "#6C438E", /* blue    */
  [5] = "#B96492", /* magenta */
  [6] = "#E89C90", /* cyan    */
  [7] = "#f5e5c6", /* white   */

  /* 8 bright colors */
  [8]  = "#aba08a",  /* black   */
  [9]  = "#D46254",  /* red     */
  [10] = "#D9A857", /* green   */
  [11] = "#F49E68", /* yellow  */
  [12] = "#6C438E", /* blue    */
  [13] = "#B96492", /* magenta */
  [14] = "#E89C90", /* cyan    */
  [15] = "#f5e5c6", /* white   */

  /* special colors */
  [256] = "#090b1b", /* background */
  [257] = "#f5e5c6", /* foreground */
  [258] = "#f5e5c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
