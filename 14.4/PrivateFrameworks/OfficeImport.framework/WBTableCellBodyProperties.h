//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WBTableCellBodyProperties : NSObject
{
}

+ (void)write:(id)arg1 wrdProperties:(struct WrdTableProperties *)arg2 tracked:(struct WrdTableProperties *)arg3 index:(unsigned long long)arg4;
+ (void)readFrom:(struct WrdTableProperties *)arg1 tracked:(struct WrdTableProperties *)arg2 properties:(id)arg3 index:(unsigned long long)arg4;
+ (void)mapProperties:(id)arg1 toWordProperties:(struct WrdTableProperties *)arg2 index:(unsigned long long)arg3;
+ (void)mapWordProperties:(struct WrdTableProperties *)arg1 toProperties:(id)arg2 index:(unsigned long long)arg3;
+ (id)formattingChangeDate:(const struct WrdDateTime *)arg1;

@end

