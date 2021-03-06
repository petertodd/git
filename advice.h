#ifndef ADVICE_H
#define ADVICE_H

#include "git-compat-util.h"

extern int advice_push_nonfastforward;
extern int advice_push_non_ff_current;
extern int advice_push_non_ff_default;
extern int advice_push_non_ff_matching;
extern int advice_status_hints;
extern int advice_commit_before_merge;
extern int advice_resolve_conflict;
extern int advice_implicit_identity;
extern int advice_detached_head;

int git_default_advice_config(const char *var, const char *value);
void advise(const char *advice, ...);
int error_resolve_conflict(const char *me);
extern void NORETURN die_resolve_conflict(const char *me);
void detach_advice(const char *new_name);

#endif /* ADVICE_H */
