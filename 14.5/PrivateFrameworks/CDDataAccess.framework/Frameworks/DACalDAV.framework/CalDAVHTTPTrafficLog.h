//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject
{
    DACoreDAVLogger *_curLogger;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) DACoreDAVLogger *curLogger; // @synthesize curLogger=_curLogger;
- (void)logData:(id)arg1;
- (void)logStringWithFormat:(id)arg1;
- (void)finishSnippets;
- (void)logString:(id)arg1;
- (_Bool)enabled;
- (id)init;

@end

