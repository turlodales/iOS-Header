//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem
{
    NSArray *_children;
    unsigned long long _axis;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (_Bool)isVerticalGroup;
- (_Bool)isHorizontalGroup;
- (id)description;
- (id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3;

@end

