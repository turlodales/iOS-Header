//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserController;

@interface TabLimitCleanupWizard : NSObject
{
    _Bool _privateBrowsing;
    BrowserController *_browserController;
    CDUnknownBlockType _resultHandler;
}

- (void).cxx_destruct;
- (id)_cleanupGroupForRange:(long long)arg1;
- (id)_smallCleanupGroup;
- (id)makeViewController;
- (id)initForPrivateBrowsing:(_Bool)arg1 withBrowserController:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end

