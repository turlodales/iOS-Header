//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class FBSApplicationPlaceholder;

@protocol FBSApplicationPlaceholderObserver <NSObject>

@optional
- (void)placeholderPercentCompleteDidChange:(FBSApplicationPlaceholder *)arg1;
- (void)placeholderProgressDidUpdate:(FBSApplicationPlaceholder *)arg1;
- (void)placeholderDidChangeSignificantly:(FBSApplicationPlaceholder *)arg1;
@end

