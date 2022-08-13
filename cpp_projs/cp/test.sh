PS1='FROM .BASHRC --*'
export PS1
PS1='FROM .BASH_LOGIN --*'
export PS1
PS1='FROM .BASH_PROFILE --*'
export PS1
[ "$PS1"="\\s+\\v\\\$ " ] && PS1="[\u@\h \W]\\$ "
