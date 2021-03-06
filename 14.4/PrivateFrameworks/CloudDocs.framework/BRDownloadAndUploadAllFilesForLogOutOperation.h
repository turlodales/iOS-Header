//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

#import <CloudDocs/NSProgressReporting-Protocol.h>

@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    CDUnknownBlockType _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

- (void).cxx_destruct;
@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) CDUnknownBlockType downloadAllFilesCompletionBlock; // @synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

