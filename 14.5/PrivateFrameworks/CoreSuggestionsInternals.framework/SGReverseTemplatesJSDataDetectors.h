//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary;

@interface SGReverseTemplatesJSDataDetectors : NSObject
{
    NSMutableDictionary *_scanners;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void).cxx_destruct;
- (void)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2 foundTypes:(id)arg3;
- (id)_result:(struct __DDResult *)arg1 containsTypes:(id)arg2;
- (id)runDataDetectors:(id)arg1 locale:(id)arg2 epoch:(double)arg3 metadataForTypes:(id)arg4;
- (void)dealloc;
- (id)init;

@end

