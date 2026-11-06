#ifndef __KSU_H_SELINUX_HIDE
#define __KSU_H_SELINUX_HIDE

#include <linux/types.h>

int sepol_expected_argc(u32 cmd);
bool ksu_should_hide_selinux_context(const char *value, size_t size);

void ksu_selinux_hide_init();
void ksu_selinux_hide_exit();
void ksu_selinux_hide_handle_second_stage();
void ksu_selinux_hide_handle_post_fs_data();

#endif
