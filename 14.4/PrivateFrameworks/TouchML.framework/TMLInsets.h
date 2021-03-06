//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLInsetsJSExports-Protocol.h>

@interface TMLInsets : NSObject <TMLInsetsJSExports, NSCopying>
{
    struct UIEdgeInsets _insets;
}

+ (void)initializeJSContext:(id)arg1;
- (id)description;
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double top;
- (struct UIEdgeInsets)UIEdgeInsets;
- (id)UIEdgeInsetsValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end

