/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class SBBatteryChargingView;

@interface SBAwayChargingView : UIView {
	SBBatteryChargingView* _chargingView;
	SBBatteryChargingView* _headsetChargingView;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIImageView* _backgroundView;
#endif
	unsigned _animatingBatteries : 1;
	unsigned _updateAfterAnimation : 1;
	unsigned _showingDeviceBattery : 1;
	unsigned _showingHeadsetBattery : 1;
}
+(id)backgroundImage __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
+(CGSize)defaultSize;
+(BOOL)shouldShowDeviceBattery;
+(BOOL)shouldShowHeadsetBattery;
-(instancetype)initWithFrame:(CGRect)frame awayView:(id)view;
// inherited: -(void)dealloc;
-(void)updateInterface:(BOOL)interface;
-(id)chargingView;
-(void)addChargingView;
-(void)hideChargingView;
-(id)headsetChargingView;
-(void)addHeadsetChargingView;
-(void)hideHeadsetChargingView;
-(CGPoint)_dualBatteryPositionForBattery:(id)battery;
-(CGPoint)_singleBatteryPositionForBattery:(id)battery;
-(void)_switchFromBattery:(id)battery toView:(id)view animate:(BOOL)animate;
-(void)_slideBattery:(id)battery toShowBattery:(id)showBattery animate:(BOOL)animate;
-(void)_slideBattery:(id)battery toHideBattery:(id)hideBattery animate:(BOOL)animate;
-(void)_finishedFadeForSwitch:(id)aSwitch finished:(BOOL)finished context:(id)context;
-(void)_finishedSlideForSlideToReveal:(id)reveal finished:(BOOL)finished context:(id)context;
-(void)_finishedHideForHideToSlide:(id)slide finished:(BOOL)finished context:(id)context;
-(void)_batteryAnimationFinished:(id)finished;
-(void)_test:(id)test;
@end
