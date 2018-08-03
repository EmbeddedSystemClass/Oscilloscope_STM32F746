/******************************************************************************
 *
 * @brief     This file is part of the TouchGFX 4.7.0 evaluation distribution.
 *
 * @author    Draupner Graphics A/S <http://www.touchgfx.com>
 *
 ******************************************************************************
 *
 * @section Copyright
 *
 * Copyright (C) 2014-2016 Draupner Graphics A/S <http://www.touchgfx.com>.
 * All rights reserved.
 *
 * TouchGFX is protected by international copyright laws and the knowledge of
 * this source code may not be used to write a similar product. This file may
 * only be used in accordance with a license and should not be re-
 * distributed in any way without the prior permission of Draupner Graphics.
 *
 * This is licensed software for evaluation use, any use must strictly comply
 * with the evaluation license agreement provided with delivery of the
 * TouchGFX software.
 *
 * The evaluation license agreement can be seen on www.touchgfx.com
 *
 * @section Disclaimer
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Draupner Graphics A/S has
 * no obligation to support this software. Draupner Graphics A/S is providing
 * the software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Draupner Graphics A/S can not be held liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this software.
 *
 *****************************************************************************/
#ifndef UIEVENTLISTENER_HPP
#define UIEVENTLISTENER_HPP

#include <touchgfx/hal/Types.hpp>

namespace touchgfx
{

class ClickEvent;
class DragEvent;
class GestureEvent;

/**
 * @class UIEventListener UIEventListener.hpp touchgfx/UIEventListener.hpp
 *
 * @brief This class declares a handler interface for user interface events.
 *
 *        This class declares a handler interface for user interface events, i.e. events
 *        generated by the users interaction with the device. With the exception of the system
 *        timer tick, all other system events, which are not related to the user interface
 *        device peripherals (display, keys etc.) are not part of this interface.
 */
class UIEventListener
{
public:

    /**
     * @fn virtual void UIEventListener::handleClickEvent(const ClickEvent& event)
     *
     * @brief This handler is invoked when a mouse click or display touch event has been detected
     *        by the system.
     *
     *        This handler is invoked when a mouse click or display touch event has been
     *        detected by the system.
     *
     * @param event The event data.
     */
    virtual void handleClickEvent(const ClickEvent& event)
    {
    }

    /**
     * @fn virtual void UIEventListener::handleDragEvent(const DragEvent& event)
     *
     * @brief This handler is invoked when a drag event has been detected by the system.
     *
     *        This handler is invoked when a drag event has been detected by the system.
     *
     * @param event The event data.
     */
    virtual void handleDragEvent(const DragEvent& event)
    {
    }

    /**
     * @fn virtual void UIEventListener::handleGestureEvent(const GestureEvent& event)
     *
     * @brief This handler is invoked when a gesture event has been detected by the system.
     *
     *        This handler is invoked when a gesture event has been detected by the system.
     *
     * @param event The event data.
     */
    virtual void handleGestureEvent(const GestureEvent& event)
    {
    }

    /**
     * @fn virtual void UIEventListener::handleKeyEvent(uint8_t c)
     *
     * @brief This handler is invoked when a key (or button) event has been detected by the system.
     *
     *        This handler is invoked when a key (or button) event has been detected by the
     *        system.
     *
     * @param c The key or button pressed.
     */
    virtual void handleKeyEvent(uint8_t c)
    {
    }

    /**
     * @fn virtual void UIEventListener::handleTickEvent()
     *
     * @brief This handler is invoked when a system tick event has been generated.
     *
     *        This handler is invoked when a system tick event has been generated. The system
     *        tick period is configured in the HAL.
     */
    virtual void handleTickEvent()
    {
    }

    /**
     * @fn virtual void UIEventListener::handlePendingScreenTransition()
     *
     * @brief This handler is invoked when a change screen event is pending.
     *
     *        This handler is invoked when a change screen event is pending.
     */
    virtual void handlePendingScreenTransition()
    {
    }

    /**
     * @fn virtual UIEventListener::~UIEventListener()
     *
     * @brief Destructor.
     *
     *        Destructor.
     */
    virtual ~UIEventListener()
    {
    }
};

} // namespace touchgfx

#endif // UIEVENTLISTENER_HPP