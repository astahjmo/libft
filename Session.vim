let SessionLoad = 1
let s:so_save = &g:so | let s:siso_save = &g:siso | setg so=0 siso=0 | setl so=-1 siso=-1
let v:this_session=expand("<sfile>:p")
silent only
silent tabonly
cd ~/Documents/works/42school/libft
if expand('%') == '' && !&modified && line('$') <= 1 && getline(1) == ''
  let s:wipebuf = bufnr('%')
endif
set shortmess=aoO
argglobal
%argdel
edit memset.c
let s:save_splitbelow = &splitbelow
let s:save_splitright = &splitright
set splitbelow splitright
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd _ | wincmd |
split
1wincmd k
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
wincmd w
wincmd _ | wincmd |
vsplit
1wincmd h
wincmd w
let &splitbelow = s:save_splitbelow
let &splitright = s:save_splitright
wincmd t
let s:save_winminheight = &winminheight
let s:save_winminwidth = &winminwidth
set winminheight=0
set winheight=1
set winminwidth=0
set winwidth=1
exe 'vert 1resize ' . ((&columns * 26 + 106) / 213)
exe '2resize ' . ((&lines * 31 + 25) / 51)
exe 'vert 2resize ' . ((&columns * 98 + 106) / 213)
exe '3resize ' . ((&lines * 31 + 25) / 51)
exe 'vert 3resize ' . ((&columns * 87 + 106) / 213)
exe '4resize ' . ((&lines * 17 + 25) / 51)
exe 'vert 4resize ' . ((&columns * 98 + 106) / 213)
exe '5resize ' . ((&lines * 17 + 25) / 51)
exe 'vert 5resize ' . ((&columns * 87 + 106) / 213)
argglobal
enew
file NERD_tree_1
balt memset.c
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal nofen
wincmd w
argglobal
balt libft.h
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 23 - ((20 * winheight(0) + 15) / 31)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 23
normal! 09|
wincmd w
argglobal
if bufexists("libft.h") | buffer libft.h | else | edit libft.h | endif
if &buftype ==# 'terminal'
  silent file libft.h
endif
balt memset.c
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
silent! normal! zE
let &fdl = &fdl
let s:l = 21 - ((19 * winheight(0) + 15) / 31)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 21
normal! 029|
wincmd w
argglobal
if bufexists("term://~/Documents/works/42school/libft//53354:/bin/bash") | buffer term://~/Documents/works/42school/libft//53354:/bin/bash | else | edit term://~/Documents/works/42school/libft//53354:/bin/bash | endif
if &buftype ==# 'terminal'
  silent file term://~/Documents/works/42school/libft//53354:/bin/bash
endif
balt term://~/Documents/works/42school/libft//53354:/bin/bash
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 1 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 1
normal! 0
wincmd w
argglobal
if bufexists("term://~/Documents/works/42school/libft//54383:/bin/bash") | buffer term://~/Documents/works/42school/libft//54383:/bin/bash | else | edit term://~/Documents/works/42school/libft//54383:/bin/bash | endif
if &buftype ==# 'terminal'
  silent file term://~/Documents/works/42school/libft//54383:/bin/bash
endif
balt term://~/Documents/works/42school/libft//53354:/bin/bash
setlocal fdm=manual
setlocal fde=0
setlocal fmr={{{,}}}
setlocal fdi=#
setlocal fdl=0
setlocal fml=1
setlocal fdn=20
setlocal fen
let s:l = 13 - ((0 * winheight(0) + 8) / 17)
if s:l < 1 | let s:l = 1 | endif
keepjumps exe s:l
normal! zt
keepjumps 13
normal! 025|
wincmd w
2wincmd w
exe 'vert 1resize ' . ((&columns * 26 + 106) / 213)
exe '2resize ' . ((&lines * 31 + 25) / 51)
exe 'vert 2resize ' . ((&columns * 98 + 106) / 213)
exe '3resize ' . ((&lines * 31 + 25) / 51)
exe 'vert 3resize ' . ((&columns * 87 + 106) / 213)
exe '4resize ' . ((&lines * 17 + 25) / 51)
exe 'vert 4resize ' . ((&columns * 98 + 106) / 213)
exe '5resize ' . ((&lines * 17 + 25) / 51)
exe 'vert 5resize ' . ((&columns * 87 + 106) / 213)
tabnext 1
badd +1 term://~/Documents/works/42school/libft//53354:/bin/bash
badd +1 isalpha.c
badd +0 term://~/Documents/works/42school/libft//54383:/bin/bash
badd +21 libft.h
badd +14 isdigit.c
badd +17 isalnum.c
badd +16 isascii.c
badd +15 isprint.c
badd +17 strlen.c
badd +23 memset.c
if exists('s:wipebuf') && len(win_findbuf(s:wipebuf)) == 0 && getbufvar(s:wipebuf, '&buftype') isnot# 'terminal'
  silent exe 'bwipe ' . s:wipebuf
endif
unlet! s:wipebuf
set winheight=1 winwidth=20 shortmess=filnxtToOFc
let &winminheight = s:save_winminheight
let &winminwidth = s:save_winminwidth
let s:sx = expand("<sfile>:p:r")."x.vim"
if filereadable(s:sx)
  exe "source " . fnameescape(s:sx)
endif
let &g:so = s:so_save | let &g:siso = s:siso_save
set hlsearch
nohlsearch
doautoall SessionLoadPost
unlet SessionLoad
" vim: set ft=vim :
