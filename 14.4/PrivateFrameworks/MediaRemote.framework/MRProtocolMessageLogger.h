//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRProtocolMessageLogger : NSObject
{
    _Bool _shouldLog;
    _Bool _shouldVerboselyLog;
}

+ (id)sharedLogger;
@property(nonatomic) _Bool shouldVerboselyLog; // @synthesize shouldVerboselyLog=_shouldVerboselyLog;
@property(nonatomic) _Bool shouldLog; // @synthesize shouldLog=_shouldLog;
- (void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3;
- (id)init;

@end

