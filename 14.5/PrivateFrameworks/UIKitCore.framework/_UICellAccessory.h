//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UICellAccessory : NSObject
{
    UIView *_view;
    _Bool _alwaysNeedsLayout;
    NSString *_identifier;
    double _reservedLayoutWidth;
}

+ (id)accessoryWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool alwaysNeedsLayout; // @synthesize alwaysNeedsLayout=_alwaysNeedsLayout;
@property(nonatomic) double reservedLayoutWidth; // @synthesize reservedLayoutWidth=_reservedLayoutWidth;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

