/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDownloadController : NSObject <_WKDownloadDelegate> {
    <_SFDownloadControllerDelegate> *_delegate;
    unsigned int _downloadBackgroundTaskIdentifier;
    long long _downloadBytesExpected;
    unsigned int _downloadBytesLoaded;
    int _downloadingFileType;
    _WKDownload *_fileDownload;
    NSString *_fileDownloadPath;
    NSURL *_fileDownloadSourceURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFDownloadControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int downloadingFileType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginDownloadBackgroundTask:(id)arg1;
- (void)_clearFileDownloadState;
- (id)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 allowOverwrite:(BOOL*)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_endDownloadBackgroundTask;
- (id)delegate;
- (int)downloadingFileType;
- (void)setDelegate:(id)arg1;
- (void)setDownloadingFileType:(int)arg1;

@end