/* GS2.GS2 12a2:02b8 - error_recovery
 * Calls FUN_12a2_00e9 (error handler chain)
 */
extern void _far FUN_12a2_00e9(void);
extern void _far error_recovery(void)
{
    FUN_12a2_00e9();
    return;
}