//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface OSAReport : NSObject
{
    NSString *_incidentID;
    NSString *_logType;
    double _capture_time;
    NSMutableArray *_notes;
    NSMutableDictionary *_logWritingOptions;
    NSString *_logfile;
}

+ (id)bootArgs;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(_Bool)arg1;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logfile; // @synthesize logfile=_logfile;
@property(readonly, nonatomic) NSArray *notes; // @synthesize notes=_notes;
@property(readonly, nonatomic) double capture_time; // @synthesize capture_time=_capture_time;
- (int)streamContentAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)saveWithOptions:(id)arg1;
- (_Bool)secondChanceToSylog;
- (void)symlink:(id)arg1;
- (void)generateLogAtLevel:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)additionalIPSMetadata;
- (_Bool)isActionable;
- (id)reportNamePrefix;
- (id)appleCareDetails;
- (double)captureTime;
- (id)incidentID;
- (_Bool)isAppleTV;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)problemType;
- (void)alignIncident:(id)arg1 at:(double)arg2;
- (id)init;

@end

