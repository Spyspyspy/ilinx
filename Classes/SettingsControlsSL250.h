//
//  SettingsControlsSL250.h
//  iLinX
//
//  Created by mcf on 16/02/2009.
//  Copyright 2009 Micropraxis Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SettingsControls.h"

@class CustomSlider;

@interface SettingsControlsSL250 : SettingsControls
{
@private
  UILabel *_balanceLabel;
  UISlider *_balance;
  UILabel *_band1Label;
  UISlider *_band1;
  UILabel *_band2Label;
  UISlider *_band2;
  UILabel *_band3Label;
  UISlider *_band3;
  UILabel *_band4Label;
  UISlider *_band4;
  NSUInteger _ignoreFlags;
}

@end
