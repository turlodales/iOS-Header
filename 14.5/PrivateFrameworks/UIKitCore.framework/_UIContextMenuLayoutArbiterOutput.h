//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterOutput : NSObject
{
    NSMapTable *_accessoryPositions;
    struct CGPoint _menuAnchorPoint;
    struct CGRect _contentBounds;
    struct CGRect _previewFrame;
    struct CGRect _menuFrame;
    CDStruct_a36705e8 _anchor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *accessoryPositions; // @synthesize accessoryPositions=_accessoryPositions;
@property(nonatomic) CDStruct_a36705e8 anchor; // @synthesize anchor=_anchor;
@property(nonatomic) struct CGPoint menuAnchorPoint; // @synthesize menuAnchorPoint=_menuAnchorPoint;
@property(nonatomic) struct CGRect menuFrame; // @synthesize menuFrame=_menuFrame;
@property(nonatomic) struct CGRect previewFrame; // @synthesize previewFrame=_previewFrame;
@property(nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;

@end

