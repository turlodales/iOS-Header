//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface
{
    SKProductPageViewController *_parentProductPageViewController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak SKProductPageViewController *parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(_Bool)arg2;
- (id)makeStoreSheetRequest;

@end

