//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMVideoCorruptor : NSObject
{
}

+ (_Bool)corruptVideoFileAtURLWhenEnabled:(id)arg1;
+ (int)_corruptMethodMoovForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (int)_corruptMethodMdatForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (int)_corruptMethodFytpForFile:(struct __sFILE *)arg1 ofSize:(long long)arg2;
+ (int)_findBox:(unsigned int)arg1 inFile:(struct __sFILE *)arg2 ofSize:(long long)arg3 boxSize:(long long *)arg4;
+ (int)_getBoxInfoFromFile:(struct __sFILE *)arg1 ofSize:(long long)arg2 boxType:(unsigned int *)arg3 boxSize:(long long *)arg4;

@end

