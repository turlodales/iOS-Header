//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXTextCharPropertyBag : NSObject
{
}

+ (void)readCharacterProperties:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (id)stringWithUnderlineType:(unsigned char)arg1;
+ (id)stringWithStrikeThroughType:(unsigned char)arg1;
+ (id)stringWithCapsType:(unsigned char)arg1;
+ (void)readFont:(struct _xmlNode *)arg1 characterProperties:(id)arg2;
+ (void)readFormatting:(struct _xmlNode *)arg1 characterProperties:(id)arg2 drawingState:(id)arg3;
+ (unsigned char)readUnderlineType:(id)arg1;
+ (id)oaxUnderlineMap;

@end

