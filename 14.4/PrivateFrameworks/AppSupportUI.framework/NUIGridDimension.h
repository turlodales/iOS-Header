//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSupportUI/NUIGridDimension-Protocol.h>

@class NSArray, NSString, NUIContainerGridView;

__attribute__((visibility("hidden")))
@interface NUIGridDimension : NSObject <NUIGridDimension>
{
    NUIContainerGridView *_gridView;
    NSArray *_arrangedSubviews;
    double _length;
    double _spacing;
    struct {
        unsigned int align:8;
        unsigned int isRow:1;
        unsigned int hidden:1;
        unsigned int wasDetached:1;
    } _flags;
}

@property(nonatomic) long long alignment;
@property(nonatomic) double spacingAfter;
@property(nonatomic) double length;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(copy, nonatomic) NSArray *arrangedSubviews; // @dynamic arrangedSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

