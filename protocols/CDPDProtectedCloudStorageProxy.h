/* Generated by RuntimeBrowser.
 */

@protocol CDPDProtectedCloudStorageProxy <NSObject>

@required

- (BOOL)pcsIdentityMigrateToStingrayWithInfo:(NSDictionary *)arg1 error:(id*)arg2;
- (BOOL)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 erorr:(id*)arg2;
- (BOOL)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData { }*)arg1 error:(id*)arg2;
- (struct _PCSIdentitySetData { }*)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id*)arg2;

@end
