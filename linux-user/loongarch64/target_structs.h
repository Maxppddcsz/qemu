/*
 * Copyright (c) 2023 Loongarch Technology
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2 or later, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LOONGARCH_TARGET_STRUCTS_H
#define LOONGARCH_TARGET_STRUCTS_H

struct target_ipc_perm {
    abi_int __key;    /* Key.  */
    abi_uint uid;     /* Owner's user ID.  */
    abi_uint gid;     /* Owner's group ID.  */
    abi_uint cuid;    /* Creator's user ID.  */
    abi_uint cgid;    /* Creator's group ID.  */
    abi_uint mode;    /* Read/write permission.  */
    abi_ushort __seq; /* Sequence number.  */
    abi_ushort __pad1;
    abi_ulong __unused1;
    abi_ulong __unused2;
};

struct target_shmid_ds {
    struct target_ipc_perm shm_perm; /* operation permission struct */
    abi_long shm_segsz;              /* size of segment in bytes */
    abi_ulong shm_atime;             /* time of last shmat() */
    abi_ulong shm_dtime;             /* time of last shmdt() */
    abi_ulong shm_ctime;             /* time of last change by shmctl() */
    abi_int shm_cpid;                /* pid of creator */
    abi_int shm_lpid;                /* pid of last shmop */
    abi_ulong shm_nattch;            /* number of current attaches */
    abi_ulong __unused1;
    abi_ulong __unused2;
};

#define TARGET_SEMID64_DS

/*
 * The semid64_ds structure for the MIPS architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 */
struct target_semid64_ds {
    struct target_ipc_perm sem_perm;
    abi_ulong sem_otime;
    abi_ulong sem_ctime;
    abi_ulong sem_nsems;
    abi_ulong __unused1;
    abi_ulong __unused2;
};

#endif
