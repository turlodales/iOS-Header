//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCacheDelegate-Protocol.h>
#import <StoreServices/NSURLSessionDataDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString, SSCircularBuffer, SSMetricsController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSURLSessionManager : NSObject <NSCacheDelegate, NSURLSessionDataDelegate>
{
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned int _memoryPressureStatus;
    unsigned long long _memoryPressureCachedMaxSize;
    NSArray *_customURLProtocols;
    NSObject<OS_dispatch_queue> *_eventQueue;
    SSCircularBuffer *_httpArchiveBuffer;
    SSMetricsController *_metricsController;
    NSMutableDictionary *_requestData;
    NSObject<OS_dispatch_queue> *_requestDataQueue;
    NSMutableDictionary *_taskMetrics;
    NSObject<OS_dispatch_queue> *_taskMetricsQueue;
    NSMutableDictionary *_responseData;
    NSObject<OS_dispatch_queue> *_responseDataQueue;
    NSMutableDictionary *_recordResponseMap;
    NSObject<OS_dispatch_queue> *_recordResponseQueue;
    NSMutableDictionary *_sendTimingDataMap;
    NSObject<OS_dispatch_queue> *_sendTimingDataQueue;
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_sessionsQueue;
    NSMapTable *_taskDelegates;
    NSObject<OS_dispatch_queue> *_taskDelegatesQueue;
}

+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (double)_localTimeIntervalToServerTimeInterval:(double)arg1;
+ (id)bagValueForKey:(id)arg1 delegate:(id)arg2 type:(unsigned long long)arg3;
+ (id)_metricsDictionaryWithDelegate:(id)arg1;
+ (id)_bagPerformanceValuesWithDelegate:(id)arg1;
+ (_Bool)_shouldCollectNetworkLogs;
+ (double)_randomDouble;
+ (id)_fetchNetworkQualityReports;
+ (_Bool)_fetchedFromCache:(id)arg1;
+ (id)_tidStateForTask:(id)arg1 delegate:(id)arg2;
+ (_Bool)_shouldCreateLocalCache;
+ (id)_responseDateFromTask:(id)arg1 delegate:(id)arg2;
+ (unsigned long long)_messageSizeFromTask:(id)arg1 isRequest:(_Bool)arg2 delegate:(id)arg3;
+ (id)_DNSServerIPAddresses;
+ (id)_legacyBagValueForKey:(id)arg1;
+ (id)eventFromTimingData:(id)arg1 delegate:(id)arg2 session:(id)arg3 task:(id)arg4 error:(id)arg5;
+ (id)eventFromTimingData:(id)arg1 delegate:(id)arg2 task:(id)arg3 error:(id)arg4;
+ (id)eventFromTimingData:(id)arg1 requestProperties:(id)arg2 task:(id)arg3 error:(id)arg4;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2 error:(id)arg3;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskDelegatesQueue; // @synthesize taskDelegatesQueue=_taskDelegatesQueue;
@property(retain, nonatomic) NSMapTable *taskDelegates; // @synthesize taskDelegates=_taskDelegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue; // @synthesize sessionsQueue=_sessionsQueue;
@property(retain, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sendTimingDataQueue; // @synthesize sendTimingDataQueue=_sendTimingDataQueue;
@property(retain, nonatomic) NSMutableDictionary *sendTimingDataMap; // @synthesize sendTimingDataMap=_sendTimingDataMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordResponseQueue; // @synthesize recordResponseQueue=_recordResponseQueue;
@property(retain, nonatomic) NSMutableDictionary *recordResponseMap; // @synthesize recordResponseMap=_recordResponseMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseDataQueue; // @synthesize responseDataQueue=_responseDataQueue;
@property(retain, nonatomic) NSMutableDictionary *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *taskMetricsQueue; // @synthesize taskMetricsQueue=_taskMetricsQueue;
@property(retain, nonatomic) NSMutableDictionary *taskMetrics; // @synthesize taskMetrics=_taskMetrics;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestDataQueue; // @synthesize requestDataQueue=_requestDataQueue;
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) SSMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) SSCircularBuffer *httpArchiveBuffer; // @synthesize httpArchiveBuffer=_httpArchiveBuffer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(copy, nonatomic) NSArray *customURLProtocols; // @synthesize customURLProtocols=_customURLProtocols;
- (void)_insertEventIntoDatabase:(id)arg1 delegate:(id)arg2;
- (_Bool)_shouldEnableAPSRWithTask:(id)arg1;
- (void)_setAPSTopicWithTask:(id)arg1;
- (void)_logAPSResultsWithTask:(id)arg1;
- (_Bool)_shouldRecordResponseBodyForDataTask:(id)arg1;
- (void)_setRequestData:(id)arg1 forSessionTask:(id)arg2;
- (id)_saveHTTPArchiveBufferToDiskDecompressed:(_Bool)arg1;
- (id)_responseDataForSessionTask:(id)arg1;
- (id)_requestDataForSessionTask:(id)arg1;
- (void)_removeResponseDataForSessionTask:(id)arg1;
- (void)_removeRecordResponseDataForSessionTask:(id)arg1;
- (void)_listenForLowMemoryWarning;
- (void)_appendResponseData:(id)arg1 forSessionTask:(id)arg2;
- (id)_URLCacheIDForDelegate:(id)arg1;
- (id)_URLCacheForDelegate:(id)arg1;
- (id)_taskMetricsForSessionTask:(id)arg1;
- (_Bool)_shouldSetCookiesForDelegate:(id)arg1;
- (_Bool)_shouldEnableTLSSessionForDelegate:(id)arg1;
- (_Bool)_shouldRequireCelluarForDelegate:(id)arg1;
- (_Bool)_shouldDisableCellularForDelegate:(id)arg1;
- (void)_setTaskMetrics:(id)arg1 forSessionTask:(id)arg2;
- (void)_setSendTimingData:(id)arg1 forSessionTask:(id)arg2;
- (void)_setDelegate:(id)arg1 forTask:(id)arg2;
- (id)_sessionConfigurationWithDelegate:(id)arg1 collectTimingData:(_Bool)arg2 allowsTLSSessionTickets:(_Bool)arg3;
- (id)_sessionIDWithDelegate:(id)arg1 collectTimingData:(_Bool)arg2 allowsTLSSessionTickets:(_Bool)arg3;
- (id)_sessionWithDelegate:(id)arg1 collectTimingData:(_Bool *)arg2;
- (_Bool)_sendTimingDataForSessionTask:(id)arg1;
- (void)_removeDelegateForTask:(id)arg1;
- (int)_PIDFromAuditTokenData:(id)arg1;
- (void)_logCacheHitForTask:(id)arg1 metrics:(id)arg2;
- (id)_delegateForTask:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)flushHTTPArchiveBuffer;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
@property(nonatomic) unsigned long long httpArchiveBufferSize;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

