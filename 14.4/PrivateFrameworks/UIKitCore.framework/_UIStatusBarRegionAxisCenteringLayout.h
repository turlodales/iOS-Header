//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarRegionAxisLayout-Protocol.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout>
{
    double _interspace;
    double _margin;
    long long _maxNumberOfItems;
}

@property(nonatomic) long long maxNumberOfItems; // @synthesize maxNumberOfItems=_maxNumberOfItems;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) double interspace; // @synthesize interspace=_interspace;
- (_Bool)mayFitDisplayItems:(id)arg1;
@property(readonly, nonatomic) _Bool canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

