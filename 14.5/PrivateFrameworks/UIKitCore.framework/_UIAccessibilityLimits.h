//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface _UIAccessibilityLimits : NSObject
{
    NSHashTable *_associatedViews;
    NSString *_minimumContentSizeCategory;
    NSString *_maximumContentSizeCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *maximumContentSizeCategory; // @synthesize maximumContentSizeCategory=_maximumContentSizeCategory;
@property(copy, nonatomic) NSString *minimumContentSizeCategory; // @synthesize minimumContentSizeCategory=_minimumContentSizeCategory;
- (id)_limitedTraitCollection:(id)arg1;
- (void)_dissociateView:(id)arg1;
- (void)_associateView:(id)arg1;
- (void)_notifyAllAssociatedViews;

@end

