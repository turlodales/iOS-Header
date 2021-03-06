//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUURLWrapper-Protocol.h>

@class NSData, NSString, NSURL, TSUURLTrackerFilePresenter;

__attribute__((visibility("hidden")))
@interface TSUURLTracker : NSObject <TSUURLWrapper>
{
    TSUURLTrackerFilePresenter *_filePresenter;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)stop;
- (void)resume;
- (void)pause;
@property(readonly) NSData *bookmarkData;
- (id)URLAndReturnError:(id *)arg1;
@property(readonly) NSURL *URL;
- (void)dealloc;
- (id)initWithBookmarkData:(id)arg1 delegate:(id)arg2;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

