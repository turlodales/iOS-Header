//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBLinkTable : NSObject
{
}

+ (struct XlLinkTable *)createXlLinkTableFromLinksCollection:(id)arg1 workbook:(id)arg2 state:(id)arg3;
+ (void)readFromState:(id)arg1;
+ (int)mapEDLinkTypeToXl:(int)arg1;
+ (int)mapXlLinkTypeToED:(int)arg1;

@end

