//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI2/SNTestCase-Protocol.h>

@class SNTestContext, UIScrollView;

@protocol SNTestCaseScroll <SNTestCase>
@property(nonatomic, readonly) long long offset;
@property(nonatomic, readonly) long long iterations;
- (UIScrollView *)scrollViewWithContext:(SNTestContext *)arg1;

@optional
@property(nonatomic, readonly) long long numberOfScreens;
@property(nonatomic, readonly) unsigned long long scrollDirection;
@end

