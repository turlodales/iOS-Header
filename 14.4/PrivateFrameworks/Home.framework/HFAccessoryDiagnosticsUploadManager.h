//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSURLSession;

@interface HFAccessoryDiagnosticsUploadManager : NSObject <NSURLSessionDelegate>
{
    CDUnknownBlockType _backgroundUrlSessionCompletionHandler;
    NSMutableDictionary *_diagnosticItems;
    NSMutableOrderedSet *_pendingIdentifiers;
    NSMutableSet *_failedUploadIdentifiers;
    NSMutableSet *_uploadedIdentifiers;
    NSURLSession *_backgroundSession;
}

+ (id)backgroundURLSessionIdentifier;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSMutableSet *uploadedIdentifiers; // @synthesize uploadedIdentifiers=_uploadedIdentifiers;
@property(retain, nonatomic) NSMutableSet *failedUploadIdentifiers; // @synthesize failedUploadIdentifiers=_failedUploadIdentifiers;
@property(retain, nonatomic) NSMutableOrderedSet *pendingIdentifiers; // @synthesize pendingIdentifiers=_pendingIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *diagnosticItems; // @synthesize diagnosticItems=_diagnosticItems;
@property(copy, nonatomic) CDUnknownBlockType backgroundUrlSessionCompletionHandler; // @synthesize backgroundUrlSessionCompletionHandler=_backgroundUrlSessionCompletionHandler;
- (void)_cleanUpLocalFilesForIdentifier:(id)arg1;
- (void)_updatePreviousLogIdentifiers:(id)arg1 forKey:(id)arg2;
- (void)updateLastPurgeDate;
- (_Bool)_needsToPurgeOldLogs;
- (void)purgeStaleSubmittedLogs;
- (void)willResignActive:(id)arg1;
- (_Bool)_isValidFilenameIdentifier:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_finalizeHandlingOfIdentifier:(id)arg1;
- (void)_failAttemptToUploadCurrentIdentifier;
- (_Bool)_didPreviouslySubmitLog:(id)arg1;
- (void)_addToPendingUploads:(id)arg1;
- (void)_submitNextPendingLog;
- (id)_nextFilenameIdentifierToProcess;
- (id)filePathForIdentifier:(id)arg1;
- (id)fileURLForIdentifier:(id)arg1;
- (void)uploadDiagnosticLogUsingItem:(id)arg1;
- (void)resumeServiceForURLSessionIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

