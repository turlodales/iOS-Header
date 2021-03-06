//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/AUAudioUnitXPCProtocol-Protocol.h>

@class AUAudioUnit, AUParameterTree, NSMutableArray, NSUUID, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_voucher;

@interface AURemoteHost : NSObject <AUAudioUnitXPCProtocol>
{
    AUAudioUnit *_audioUnit;
    struct AudioComponentDescription _componentDescription;
    NSXPCConnection *_remoteHostXPCConnection;
    struct optional<AUOOPRenderingServerUser> _renderServerUser;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    struct reply_watchdog_factory _replyWatchdogFactory;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    NSMutableArray *_userPresets;
    NSUUID *_audioUnitUUID;
    struct shared_ptr<auoop::WorkgroupMirror> _workgroupMirror;
    struct KVOAggregator _kvoAggregator;
    int _deferPropertyChangeNotifications;
    NSObject<OS_dispatch_queue> *_propertyObserverQueue;
    NSMutableArray *_pendingChangedProperties;
}

+ (void)_staticInit;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *pendingChangedProperties; // @synthesize pendingChangedProperties=_pendingChangedProperties;
@property(nonatomic) int deferPropertyChangeNotifications; // @synthesize deferPropertyChangeNotifications=_deferPropertyChangeNotifications;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyObserverQueue; // @synthesize propertyObserverQueue=_propertyObserverQueue;
@property(readonly, nonatomic) NSUUID *audioUnitUUID; // @synthesize audioUnitUUID=_audioUnitUUID;
@property(readonly, nonatomic) struct AudioComponentDescription componentDescription; // @synthesize componentDescription=_componentDescription;
- (id)audioUnit;
- (void)getSpeechVoices:(CDUnknownBlockType)arg1;
- (void)cancelSpeechRequest:(CDUnknownBlockType)arg1;
- (void)synthesizeSpeechRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startUserPresetFolderMonitoring;
- (void)presetStateFor:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteUserPreset:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)loadUserPresets:(CDUnknownBlockType)arg1;
- (void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;
- (void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(CDUnknownBlockType)arg3;
- (void)selectViewConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)supportedViewConfigurations:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_fetchAndClearPendingChangedProperties;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getParameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getParameterTree:(CDUnknownBlockType)arg1;
- (id)currentParameterTree;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2 propagateError:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;
- (void)valueForProperty:(id)arg1 propagateError:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)valueForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)reset:(CDUnknownBlockType)arg1;
- (void)uninitialize:(CDUnknownBlockType)arg1;
- (void)destroyRenderPipe:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)createRenderPipe:(int)arg1 formats:(id)arg2 maxFrames:(unsigned int)arg3 midiOutSizeHint:(unsigned int)arg4 resources:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)updateWorkgroupMirror:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateHostCallbacks:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)initialize:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getBusses:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)open:(CDUnknownBlockType)arg1;
- (void)openImpl:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setBlocks;
- (void)dealloc;
- (void)close:(CDUnknownBlockType)arg1;
- (id)_getSpeechSynthesisProviderAudioUnit;
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2 timeOutHandler:(function_d3afe2e2)arg3;
- (id)initWithInputItems:(id)arg1 xpcConnection:(id)arg2;
- (id)_internalInitWithInputItems:(id)arg1 xpcConnection:(id)arg2;
- (_Bool)_identifyBus:(id)arg1 scope:(unsigned int *)arg2 element:(unsigned int *)arg3;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;

@end

