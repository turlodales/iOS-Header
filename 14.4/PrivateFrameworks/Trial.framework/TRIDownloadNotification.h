//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/TRIDownloadNotificationProtocol-Protocol.h>

@class NSError, NSString;

@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol>
{
    unsigned long long _type;
    unsigned long long _progress;
    NSError *_error;
}

+ (id)_notificationWithState:(unsigned long long)arg1;
+ (id)_descriptionForErrorCode:(unsigned long long)arg1;
+ (id)_dispatchQueue;
+ (id)notificationNameForKey:(id)arg1;
+ (_Bool)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2;
+ (_Bool)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2;
+ (_Bool)notifyDownloadCompletedForKey:(id)arg1;
+ (_Bool)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2;
+ (void)deregisterNotificationWithToken:(id)arg1;
+ (id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long progressMaxValue;
- (id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

